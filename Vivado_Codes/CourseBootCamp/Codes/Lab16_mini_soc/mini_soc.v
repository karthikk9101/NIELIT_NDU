module mini_soc (
    input clk,
    input rst,
    input alu_sel,
    input mux_sel,
    output [1:0] soc_out
);

wire [3:0] count;
wire [1:0] alu_out;

// Instantiate IP blocks
counter u_counter (.clk(clk), .rst(rst), .count(count));
alu u_alu (.a(count[1:0]), .b(2'b01), .sel(alu_sel), .result(alu_out));
mux2x1 u_mux (.in0(count[1:0]), .in1(alu_out), .sel(mux_sel), .out(soc_out));

endmodule
