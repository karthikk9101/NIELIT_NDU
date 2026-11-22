`timescale 1ns/1ps

module tb_round_robin_arbiter;

    reg clk;
    reg rst;
    reg [2:0] req;
    wire [2:0] grant;

    // DUT instantiation
    round_robin_arbiter DUT (
        .clk(clk),
        .rst(rst),
        .req(req),
        .grant(grant)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial
    begin
        $dumpfile("round_robin.vcd");
        $dumpvars();

        clk = 0;
        rst = 1;
        req = 3'b000;

        // Reset
        #10;
        rst = 0;

        // Test 1: Individual requests
        @(negedge clk) req = 3'b001;
        @(negedge clk) req = 3'b010;
        @(negedge clk) req = 3'b100;

        // Test 2: Multiple simultaneous requests
        @(negedge clk) req = 3'b011;
        @(negedge clk) req = 3'b110;
        @(negedge clk) req = 3'b101;

        // Test 3: All requesters continuously requesting
        @(negedge clk) req = 3'b111;
        repeat(9) @(negedge clk);

        // Test 4: No requests
        req = 3'b000;
        repeat(3) @(negedge clk);

        // Test 5: All requesters requesting again
        req = 3'b111;
        repeat(6) @(negedge clk);

        #10;
        $finish;
    end

    // Monitor
    initial
    begin
        $monitor("Time=%0t | Reset=%b | Req=%b | Grant=%b",
                  $time, rst, req, grant);
    end

endmodule