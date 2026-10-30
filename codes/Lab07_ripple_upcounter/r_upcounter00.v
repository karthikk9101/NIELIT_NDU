`timescale 1ns/1ps

//------------------------------------------------------------

module tff(
    input clk,reset,
    output reg q
);


always @(posedge clk or posedge reset) begin
    if (reset)
        q<= 1'b0;
    else
        q<= ~q;
    end
endmodule

//------------------------------------------------------------

module rupcounter(
    input clk, reset,
    output [3:0] q
    );

    wire q0, q1, q2, q3;
    assign q = {q3, q2, q1, q0};

    tff tff0 (  .clk(clk),
                .reset(reset),
                .q(q0));

    tff tff1 (  .clk(~q0),
                .reset(reset),
                .q(q1));

    tff tff2 (  .clk(~q1),
                .reset(reset),
                .q(q2));

    tff tff3 (  .clk(~q2),
                .reset(reset),
                .q(q3));

endmodule
