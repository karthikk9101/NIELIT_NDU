
`timescale 1ns/1ps

module rrarbiter_tb;

    reg clk, rst;
    reg [2:0] req;
    wire [2:0] grant;

    // DUT instantiation
    roundrobinarbiter uut (
        .clk(clk),
        .rst(rst),
        .req(req),
        .grant(grant)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial begin

        $dumpfile("rrarbiter.vcd");
        $dumpvars();

        clk = 0;
        rst = 1;
        req = 3'b000;

        // Reset
        #10 rst = 0;

        // Test 1: All requesters active
        #10 req = 3'b111;
        #60;

        // Test 2: Requester 0 and 2 active
        req = 3'b101;
        #40;

        // Test 3: Requester 1 only
        req = 3'b010;
        #20;

        // Test 4: Requester 0 only
        req = 3'b001;
        #20;

        // Test 5: No requests
        req = 3'b000;
        #20;

        // Test 6: All requesters active again
        req = 3'b111;
        #50;

        $finish;
    end

    // Monitor output
    initial begin
        $monitor("Time=%0t | Reset=%b | Req=%b | Grant=%b | Priority=%b",
                  $time, rst, req, grant, uut.priority);
    end

endmodule
