
`timescale 1ns/1ps

module seq101_nonoverlapping_tb;

    reg clk;
    reg rst;
    reg x;
    wire y;

    // DUT instantiation
    seq_101_nonoverlapping DUT (
        .clk(clk),
        .rst(rst),
        .x(x),
        .y(y)
    );

    // Clock generation
    always #5 clk = ~clk;

    // Task to apply serial input
    task send_bit;
        input bit_in;
        begin
            @(negedge clk);
            x = bit_in;

            @(posedge clk);
            #1;

            $display("Time=%0t | Input=%b | State=%b | Output=%b",
                     $time, x, DUT.state, y);
        end
    endtask

    // Reset task
    task reset_fsm;
        begin
            @(negedge clk);
            rst = 1;
            x = 0;

            @(negedge clk);
            rst = 0;
        end
    endtask

    initial begin

        $dumpfile("seq101_nonoverlap.vcd");
        $dumpvars();

        clk = 0;
        rst = 1;
        x = 0;

        #12;
        rst = 0;

        // Test 1: Correct sequence 101
        $display("\n--- Test 1: Correct Sequence 101 ---");

        send_bit(1);
        send_bit(0);
        send_bit(1);

        #10;
        reset_fsm;

        // Test 2: Overlapping sequence 10101
        $display("\n--- Test 2: Overlapping Sequence 10101 ---");

        send_bit(1);
        send_bit(0);
        send_bit(1);
        send_bit(0);
        send_bit(1);

        #10;
        reset_fsm;

        // Test 3: Two non-overlapping sequences 101101
        $display("\n--- Test 3: Two Non-Overlapping Sequences 101101 ---");

        send_bit(1);
        send_bit(0);
        send_bit(1);
        send_bit(1);
        send_bit(0);
        send_bit(1);

        #10;
        $finish;

    end

endmodule
