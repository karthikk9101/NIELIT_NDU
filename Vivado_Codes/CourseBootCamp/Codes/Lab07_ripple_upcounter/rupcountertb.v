
`timescale 1ns/1ps

module rupcountertb;

    reg clk, reset;
    wire [3:0] q;

    // DUT Instantiation
    rupcounter uut (
        .clk(clk),
        .reset(reset),
        .q(q)
    );

    // Clock Generation (10 ns period)
    always #5 clk = ~clk;

    initial begin

        clk = 0;
        reset = 1;

        $display("Time\tReset\tCount");
        $monitor("%0t\t%b\t%b", $time, reset, q);

        // Apply reset
        #10 reset = 0;

        // Observe counter operation
        #200;

        // Apply reset again
        reset = 1;
        #10 reset = 0;

        // Observe a few more counts
        #100;

        $finish;
    end

    initial begin
        $dumpfile("rupcountertb.vcd");
        $dumpvars();
    end

endmodule
