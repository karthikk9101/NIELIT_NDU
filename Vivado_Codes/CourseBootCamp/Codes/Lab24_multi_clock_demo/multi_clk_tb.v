module multi_clk_tb;

reg clk_fast = 0;
reg clk_slow = 0;
reg rst = 1;
reg sel = 0;
wire muxed_clk;
wire clk_div;

// Generate clk_fast = 10ns period
always #5 clk_fast = ~clk_fast;

// Generate clk_slow = 20ns period
always #10 clk_slow = ~clk_slow;

// Instantiate clock divider
clk_divider u_div (
    .clk_in(clk_fast),
    .rst(rst),
    .clk_out(clk_div)
);

// Instantiate clock multiplexer
clk_mux u_mux (
    .clk0(clk_fast),
    .clk1(clk_slow),
    .sel(sel),
    .clk_out(muxed_clk)
);

initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, multi_clk_tb);

    // Release reset
    #15 rst = 0;

    // Toggle clock select after some time
    #50 sel = 1;
    #50 sel = 0;
    #100 $finish;
end

endmodule
