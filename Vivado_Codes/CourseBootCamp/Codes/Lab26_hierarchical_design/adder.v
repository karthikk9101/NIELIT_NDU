// Simple parameterized adder
module adder #(parameter WIDTH = 8) (
    input [WIDTH-1:0] a,      // First operand
    input [WIDTH-1:0] b,      // Second operand
    output [WIDTH-1:0] sum   // Result
);

assign sum = a + b;

endmodule
