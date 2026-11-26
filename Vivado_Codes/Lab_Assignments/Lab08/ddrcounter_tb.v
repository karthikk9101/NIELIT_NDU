`timescale 1ns/1ps

module ddrcounter_tb;

    reg clk, rst;
    wire [3:0] count;

    ddrcounter uut (
        .clk(clk),
        .rst(rst),
        .count(count)
    );

    always #5 clk = ~clk;

    initial begin
        $dumpfile("ddr.vcd");
        $dumpvars(0, ddrcounter_tb);

        clk = 0;
        rst = 1;

        #10 rst = 0;

        #100;

        rst = 1;
        #10 rst = 0;

        #30 $finish;
    end

    initial begin
        $monitor("Time=%0t | clk=%b | rst=%b | count=%d",
                  $time, clk, rst, count);
    end

endmodule