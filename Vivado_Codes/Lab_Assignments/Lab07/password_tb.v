
`timescale 1ns/1ps

module password_tb;

    reg clk, rst, x;
    wire unlock;

    password uut (
        .clk(clk),
        .rst(rst),
        .x(x),
        .unlock(unlock)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial begin

        $dumpfile("password.vcd");
        $dumpvars(0, password_tb);

        clk = 0;
        rst = 1;
        x = 0;

        #10 rst = 0;

        // Enter password 1011
        #10 x = 1;
        #10 x = 0;
        #10 x = 1;
        #10 x = 1;

        #10 x = 0;

        #20 $finish;

    end

    initial begin
        $monitor("Time=%0t | x=%b | unlock=%b",
                  $time, x, unlock);
    end

endmodule
