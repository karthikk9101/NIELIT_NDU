`timescale 1ns/1ps

module rrarbiter_tb;

    reg clk;
    reg rst;
    reg [2:0] req;
    wire [2:0] grant;

    // DUT instantiation
    rrarbiter uut (
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
        #10 req = 3'b001;
        #10 req = 3'b010;
        #10 req = 3'b100;

        // Test 2: Multiple simultaneous requests
        #10 req = 3'b011;
        #10 req = 3'b110;
        #10 req = 3'b101;

        // Test 3: All requesters continuously requesting
        #10 req = 3'b111;
        #60;

        // Test 4: No requests
        req = 3'b000;
        #20;

        // Test 5: Request again
        req = 3'b111;
        #40;

        $finish;
    end

    // Monitor signals
    initial
    begin
        $monitor("Time=%0t | Reset=%b | Req=%b | Grant=%b | State=%b",
                  $time, rst, req, grant, uut.state);
    end

endmodule