// Top-level module instantiating counter and adder IPs
module top_module (
    input clk,              // Clock input
    input rst,              // Reset input
    input en,               // Enable for counter
    input [7:0] ext_input,   // External value to add
    output [7:0] result     // Combined result (counter + ext_input)
);

wire [7:0] count;

// Instantiate counter IP
counter u_counter (
    .clk(clk),
    .rst(rst),
    .en(en),
    .count(count)
);

// Instantiate adder IP
adder u_adder (
    .a(count),
    .b(ext_input),
    .sum(result)
);

endmodule
