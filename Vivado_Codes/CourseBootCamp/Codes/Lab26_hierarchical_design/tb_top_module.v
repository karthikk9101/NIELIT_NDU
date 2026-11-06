// Testbench for hierarchical top module
module tb_top_module;

reg clk = 0;
reg rst = 1;
reg en = 0;
reg [7:0] ext_input = 8'd10;
wire [7:0] result;

// 10ns clock generation
always #5 clk = ~clk;

// Instantiate top-level DUT
top_module dut (
    .clk(clk),
    .rst(rst),
    .en(en),
    .ext_input(ext_input),
    .result(result)
);

initial begin
    $dumpfile("dump.vcd");      // Output file for GTKWave
    $dumpvars(0, tb_top_module); // Dump all signals

    #12 rst = 0; // Release reset
    #5 en = 1;   // Enable counter
    #10 en = 0;  // Stop counting after 10ns
    #20 $finish; // End simulation
end

endmodule
