
`timescale 1ns/1ps

module async_fifo_tb;

    parameter DEPTH = 4;
    parameter ADDR_WIDTH = 2;

    // Clock and control signals
    reg wr_clk = 0;
    reg rd_clk = 0;
    reg rst_n = 0;

    reg wr_en = 0;
    reg rd_en = 0;

    reg [7:0] wr_data = 0;
    wire [7:0] rd_data;

    wire full;
    wire empty;

    reg random_mode = 0;

    integer i;

    // Scoreboard queue
    reg [7:0] expected_q[$];
    reg [7:0] expected_data;

    // DUT
    async_fifo #(
        .DEPTH(DEPTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) DUT (
        .wr_clk(wr_clk),
        .wr_en(wr_en),
        .wr_data(wr_data),
        .full(full),

        .rd_clk(rd_clk),
        .rd_en(rd_en),
        .rd_data(rd_data),
        .empty(empty),

        .rst_n(rst_n)
    );

    // Independent write and read clocks
    always #5 wr_clk = ~wr_clk;   // 100 MHz
    always #7 rd_clk = ~rd_clk;   // ~71.43 MHz

    // ------------------------------------------------
    // SCOREBOARD: Monitor accepted writes
    // ------------------------------------------------

    always @(posedge wr_clk) begin
        if (rst_n && wr_en && !full) begin
            expected_q.push_back(wr_data);

            $display("[%0t] WRITE: Data = %h | Queue size = %0d",
                     $time, wr_data, expected_q.size());
        end
    end

    // ------------------------------------------------
    // SCOREBOARD: Monitor accepted reads
    // ------------------------------------------------

    always @(posedge rd_clk) begin
        if (rst_n && rd_en && !empty) begin

            if (expected_q.size() == 0)
                $fatal(1, "[%0t] ERROR: Unexpected FIFO read!", $time);

            expected_data = expected_q.pop_front();

            #1;

            if (rd_data !== expected_data) begin
                $display("[%0t] ERROR: Data mismatch!", $time);
                $display("Expected = %h, Received = %h",
                         expected_data, rd_data);
                $fatal(1, "FIFO DATA CHECK FAILED");
            end

            $display("[%0t] READ : Data = %h | Queue size = %0d",
                     $time, rd_data, expected_q.size());
        end
    end

    // Clear scoreboard on asynchronous reset
    always @(negedge rst_n) begin
        expected_q.delete();
    end

    // ------------------------------------------------
    // TASK: Write one byte
    // ------------------------------------------------

    task automatic fifo_write(input [7:0] data);
        begin
            @(negedge wr_clk);
            wr_en = 1;
            wr_data = data;

            @(posedge wr_clk);
            #2;
            wr_en = 0;
        end
    endtask

    // ------------------------------------------------
    // TASK: Read one byte
    // ------------------------------------------------

    task automatic fifo_read;
        begin
            @(negedge rd_clk);
            rd_en = 1;

            @(posedge rd_clk);
            #2;
            rd_en = 0;
        end
    endtask

    // ------------------------------------------------
    // RANDOM WRITE DRIVER
    // ------------------------------------------------

    always @(negedge wr_clk) begin
        if (random_mode) begin
            wr_en   = ($urandom_range(0, 99) < 75);
            wr_data = $urandom;
        end
    end

    // ------------------------------------------------
    // RANDOM READ DRIVER
    // ------------------------------------------------

    always @(negedge rd_clk) begin
        if (random_mode) begin
            rd_en = ($urandom_range(0, 99) < 65);
        end
    end

    // ------------------------------------------------
    // MAIN TEST SEQUENCE
    // ------------------------------------------------

    initial begin

        $display("\n======================================");
        $display("       ASYNCHRONOUS FIFO STRESS TEST");
        $display("======================================\n");

        // Initial reset
        rst_n = 0;
        repeat (4) @(posedge wr_clk);
        @(negedge wr_clk);
        rst_n = 1;

        repeat (2) @(posedge rd_clk);

        $display("\n--- TEST 1: Initial FIFO status ---");

        if (empty !== 1'b1)
            $fatal(1, "FIFO should initially be EMPTY");

        if (full !== 1'b0)
            $fatal(1, "FIFO should initially NOT be FULL");

        $display("PASS: Initial FIFO status");

        // --------------------------------------------
        // TEST 2: Fill FIFO completely
        // --------------------------------------------

        $display("\n--- TEST 2: Fill FIFO ---");

        for (i = 0; i < DEPTH; i = i + 1)
            fifo_write(8'hA0 + i);

        #2;

        if (full !== 1'b1)
            $fatal(1, "FIFO did not assert FULL");

        $display("PASS: FIFO FULL condition detected");

        // --------------------------------------------
        // TEST 3: Attempt write while FULL
        // --------------------------------------------

        $display("\n--- TEST 3: Write while FULL ---");

        fifo_write(8'hFF);

        if (full !== 1'b1)
            $fatal(1, "FULL flag unexpectedly deasserted");

        if (expected_q.size() != DEPTH)
            $fatal(1, "Unexpected write while FIFO was FULL");

        $display("PASS: Write blocked while FULL");

        // --------------------------------------------
        // TEST 4: Read all FIFO entries
        // --------------------------------------------

        $display("\n--- TEST 4: Read all entries ---");

        for (i = 0; i < DEPTH; i = i + 1)
            fifo_read();

        #2;

        if (empty !== 1'b1)
            $fatal(1, "FIFO did not assert EMPTY");

        $display("PASS: FIFO EMPTY condition detected");

        // --------------------------------------------
        // TEST 5: Attempt read while EMPTY
        // --------------------------------------------

        $display("\n--- TEST 5: Read while EMPTY ---");

        fifo_read();

        if (empty !== 1'b1)
            $fatal(1, "EMPTY flag unexpectedly deasserted");

        if (expected_q.size() != 0)
            $fatal(1, "Unexpected scoreboard data");

        $display("PASS: Read blocked while EMPTY");

        // --------------------------------------------
        // TEST 6: Random stress test
        // --------------------------------------------

        $display("\n--- TEST 6: Random stress test ---");

        random_mode = 1;

        repeat (1000)
            @(posedge wr_clk);

        random_mode = 0;

        @(negedge wr_clk);
        wr_en = 0;

        @(negedge rd_clk);
        rd_en = 1;

        // Drain remaining FIFO contents
        repeat (DEPTH + 5)
            @(posedge rd_clk);

        @(negedge rd_clk);
        rd_en = 0;

        #2;

        if (!empty || expected_q.size() != 0)
            $fatal(1, "FIFO failed to drain correctly");

        $display("PASS: Random stress test");

        // --------------------------------------------
        // TEST 7: Reset during operation
        // --------------------------------------------

        $display("\n--- TEST 7: Reset during operation ---");

        fifo_write(8'h12);
        fifo_write(8'h34);

        #2;
        rst_n = 0;

        repeat (3) @(posedge wr_clk);

        @(negedge wr_clk);
        rst_n = 1;

        repeat (3) @(posedge rd_clk);

        if (empty !== 1'b1 || full !== 1'b0)
            $fatal(1, "Reset failed to restore FIFO status");

        if (expected_q.size() != 0)
            $fatal(1, "Scoreboard not cleared by reset");

        $display("PASS: Reset during operation");

        // --------------------------------------------
        // TEST 8: Post-reset operation
        // --------------------------------------------

        $display("\n--- TEST 8: Post-reset operation ---");

        fifo_write(8'h55);
        fifo_write(8'hAA);

        fifo_read();
        fifo_read();

        #2;

        if (!empty)
            $fatal(1, "FIFO should be EMPTY after post-reset reads");

        $display("PASS: Post-reset operation");

        // --------------------------------------------
        // FINAL RESULT
        // --------------------------------------------

        $display("\n======================================");
        $display("       ALL FIFO TESTS PASSED!");
        $display("======================================\n");

        $finish;

    end

    // Simulation timeout
    initial begin
        #50000;
        $fatal(1, "ERROR: Simulation timeout!");
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars();
    end
    

endmodule
