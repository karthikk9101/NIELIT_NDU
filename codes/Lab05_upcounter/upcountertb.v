`timescale 1ns/1ps
module upcountertb;
    reg clk;
    reg reset;
    wire [3:0] count;

    upcounter uut(
        .clk(clk),
        .reset(reset),
        .count(count)
        );

    always #5 clk = ~clk;

    initial 
        begin
            $monitor ("TIME = %b  Reset = %b    count = %b",$time,reset,count);
            reset = 1; #10;
            reset = 0; #200;
            $finish;

    end

initial begin
    $dumpfile("upcounter.vcd");
    $dumpvars();
    end
endmodule
