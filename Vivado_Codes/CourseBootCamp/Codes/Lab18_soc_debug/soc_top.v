// Soc integration where ALU output is passed to UART.
module soc_top (
    input clk,
    input rst_n,
    input [3:0] in1,
    input [3:0] in2,
    input sel,
    input tx_en,
    output tx_done,
    output [3:0] alu_out
);

wire [3:0] alu_result;

// ALU instance for arithmetic/logic operation
alu alu_dut (
    .a(in1),
    .b(in2),
    .sel(sel),
    .y(alu_result)
);

// BUG: tx_data expects 8 bits but alu_result is only 4 bits.
// The upper 4 bits of tx_data will be undefined or (unknown) in simulation
uart_stub uart_dut (
    .clk(clk),
    .rst_n(rst_n),
    .tx_en(tx_en),
    .tx_data(alu_result), // Mistake: should be {4'b0000, alu_result}
    .tx_done(tx_done)
);

assign alu_out = alu_result;

endmodule
