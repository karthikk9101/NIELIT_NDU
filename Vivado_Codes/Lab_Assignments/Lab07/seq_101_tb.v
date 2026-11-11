/*
`timescale 1ns/1ps

module tb_seq_101;

    reg clk;
    reg rst;
    reg in;
    wire out;

    // DUT instantiation
    seq_101 uut (
        .clk(clk),
        .rst(rst),
        .in(in),
        .out(out)
    );

    // Clock generation: 10 ns period
    always #5 clk = ~clk;

    // Test stimulus
    initial begin

        // VCD dump
        $dumpfile("seq_101.vcd");
        $dumpvars(0, tb_seq_101);

        // Initialize inputs
        clk = 0;
        rst = 1;
        in = 0;

        // Apply reset
        #10;
        rst = 0;

        // Test 1: Detect 101
        @(negedge clk) in = 1;
        @(negedge clk) in = 0;
        @(negedge clk) in = 1;

        // Test 2: Overlapping detection (10101)
        @(negedge clk) in = 0;
        @(negedge clk) in = 1;

        // Test 3: Another detection
        @(negedge clk) in = 1;
        @(negedge clk) in = 0;
        @(negedge clk) in = 1;

        // End simulation
        @(negedge clk);
        $finish;
    end

    // Monitor signals
    initial begin
        $monitor("Time=%0t | rst=%b | in=%b | state=%b | nxt_state=%b | out=%b",
                  $time, rst, in, uut.state, uut.nxt_state, out);
    end

endmodule
*/

`timescale 1ns/1ps

module tb_seq_101;

    reg  clk;
    reg  rst;
    reg  in;
    wire out;

    integer errors     = 0;
    integer checks     = 0;
    integer detections = 0;

    // DUT
    seq_101 uut (
        .clk(clk),
        .rst(rst),
        .in (in),
        .out(out)
    );

    // Clock: 10 ns period
    initial clk = 0;
    always #5 clk = ~clk;

    // ---------------- Reference model ----------------
    // hist holds the last 3 inputs sampled since reset (async clear, like the DUT)
    reg [2:0] hist = 3'b000;
    reg       chk_en = 0;

    always @(posedge clk or posedge rst) begin
        if (rst) hist <= 3'b000;
        else     hist <= {hist[1:0], in};
    end

    // Moore output: high when the last 3 sampled bits are 101
    // Checked 1 ns after each posedge, once state/hist have settled
    reg expected;
    always @(posedge clk) begin
        #1;
        if (chk_en) begin
            expected = (hist == 3'b101);
            checks   = checks + 1;
            if (expected) detections = detections + 1;
            if (out !== expected) begin
                errors = errors + 1;
                $display("[FAIL] t=%0t hist=%b out=%b expected=%b",
                          $time, hist, out, expected);
            end
        end
    end

    // ---------------- Stimulus helpers ----------------
    task send_bit(input b);
        begin
            @(negedge clk) in = b;
        end
    endtask

    // Sends data[len-1] first (MSB first)
    task send_seq(input [31:0] data, input integer len);
        integer i;
        begin
            for (i = len-1; i >= 0; i = i-1)
                send_bit(data[i]);
        end
    endtask

    integer k;

    initial begin
        $dumpfile("seq_101.vcd");
        $dumpvars(0, tb_seq_101);

        // Reset
        rst = 1; in = 0;
        repeat (2) @(negedge clk);
        rst = 0;
        chk_en = 1;

        // Test 1: simple 101
        send_seq(32'b101, 3);
        send_seq(32'b000, 3);            // flush back to idle

        // Test 2: overlapping 10101 (2 detections)
        send_seq(32'b10101, 5);
        send_seq(32'b000, 3);

        // Test 3: back-to-back 101101 (2 detections)
        send_seq(32'b101101, 6);
        send_seq(32'b000, 3);

        // Test 4: near misses, no detection expected
        // 100, 110, 000, 111, 1001, 0110
        send_seq(32'b100_110_000_111_1001_0110, 19);
        send_seq(32'b000, 3);

        // Test 5: synchronous-edge reset in the middle of a pattern
        send_seq(32'b10, 2);
        @(negedge clk) rst = 1; in = 1;
        @(negedge clk) rst = 0; in = 0;
        send_bit(1);                     // "01" after reset must NOT detect
        send_seq(32'b000, 3);

        // Test 6: ASYNC reset mid-cycle while in state D (out must drop immediately)
        send_seq(32'b101, 3);
        @(negedge clk) in = 0;           // state D now, out should be 1
        #2 rst = 1;                      // assert between clock edges
        #1;
        checks = checks + 1;
        if (out !== 1'b0) begin
            errors = errors + 1;
            $display("[FAIL] async reset did not clear out at t=%0t", $time);
        end
        @(negedge clk) rst = 0;
        send_seq(32'b000, 3);

        // Test 7: random stream
        for (k = 0; k < 300; k = k + 1)
            send_bit($random);

        // Let the last output be sampled
        repeat (3) @(negedge clk);

        $display("--------------------------------------------");
        $display("Checks: %0d | Detections: %0d | Errors: %0d",
                  checks, detections, errors);
        if (errors == 0) $display("TEST PASSED");
        else             $display("TEST FAILED");
        $display("--------------------------------------------");
        $finish;
    end

    // Signal monitor
    initial begin
        $monitor("t=%0t | rst=%b in=%b | state=%b nxt=%b | out=%b",
                 $time, rst, in, uut.state, uut.nxt_state, out);
    end

    // Watchdog
    initial begin
        $display("TIMEOUT");
        $finish;
    end

endmodule