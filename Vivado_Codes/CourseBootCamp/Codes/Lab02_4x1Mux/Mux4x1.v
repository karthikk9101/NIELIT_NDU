`timescale 1ns/1ps

module mux4x1_gate(
    input [3:0] in,
    input [1:0] sel,
    output out
    );

wire nots0,nots1;
wire and0,and1,and2,and3;

//Inverter gates
not (nots0,sel[0]);
not (nots1,sel[1]);

//AND Gate
and (and0, nots1, nots0,  in[0]);
and (and1, nots1, sel[0], in[1]);
and (and2, sel[1], nots0, in[2]);
and (and3, sel[1], sel[0], in[3]);

//OR Gate
or (out,and0,and1,and2,and3);

endmodule
