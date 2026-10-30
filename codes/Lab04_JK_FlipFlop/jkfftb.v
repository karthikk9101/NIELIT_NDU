`timescale 1ns/1ps

module jkfftb;

reg preset, clk, j, k;
wire q, qn;

jkff uut(
    .preset(preset),
    .clk(clk),
    .j(j),
    .k(k),
    .q(q),
    .qn(qn)
);

// Clock generation: 10 ns period
always #5 clk = ~clk;

initial begin
    $dumpfile("jkff.vcd");
    $dumpvars(0, jkff_tb);

    $display("Time  PRESET CLK J K | Q QN");
    $monitor("%4t    %b     %b   %b %b | %b %b",
             $time, preset, clk, j, k, q, qn);

    // Initialize inputs
    clk = 0;
    preset = 0;
    j = 0;
    k = 0;

    // Test asynchronous preset
    #2 preset = 1;
    #3 preset = 0;

    // J=0, K=0: Hold
    #5; j = 0; k = 0;

    // J=0, K=1: Reset
    #10; j = 0; k = 1;

    // J=1, K=0: Set
    #10; j = 1; k = 0;

    // J=1, K=1: Toggle
    #10; j = 1; k = 1;

    // Toggle again
    #10;

    // Test asynchronous preset while clock is low
    #2 preset = 1;
    #2 preset = 0;

    #10;
    $finish;
end

endmodule
