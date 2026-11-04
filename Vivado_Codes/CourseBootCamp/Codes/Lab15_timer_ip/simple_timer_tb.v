`timescale 1ns/1ps

module simple_timer_tb;
    reg clk = 0;
    reg rst = 1;
    reg start = 0;
    reg [7:0] load_val = 0;
    wire done;

    // Instantiate Timer DUT
    simple_timer #(.WIDTH(8)) uut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .load_val(load_val),
        .done(done)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial begin
        $dumpfile("simple_timer.vcd");
        $dumpvars(0, simple_timer_tb);

        // Reset and start
        #10 rst = 0;

        // Start timer with value 5
        #5 load_val = 8'd5; start = 1;
        #10 start = 0;

        // Wait for timer to finish
        #100;

        // Start timer again with value 3
        #5 load_val = 8'd3; start = 1;
        #10 start = 0;

        #50 $finish;
    end

endmodule
