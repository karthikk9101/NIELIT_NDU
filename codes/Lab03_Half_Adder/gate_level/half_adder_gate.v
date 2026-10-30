`timescale 1ns/1ps

module half_adder_gate(
    input a,b,
    output sum,carry
    );

xor a1(sum,a,b);
and a2(carry,a,b);

endmodule
