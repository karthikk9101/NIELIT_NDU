/*Mealy FSM*/
/*Cannot do overlapping*/
`timescale 1ns/1ps
module seq_1110(
    input clk,
    input rst,
    input x,
    output reg y
);
    //State declaration
    parameter S0=2'b00;
    parameter S1=2'b01;
    parameter S2=2'b10;
    parameter S3=2'b11;
    reg [1:0] state, next_state;
    always @(posedge clk or posedge rst) begin
        if (rst)
            state<=S0;
        else
            state<=next_state;    
    end
    //next state logic
    always @(*) begin
        next_state=state;
        y=1'b0;
        case (state)
            S0: begin
                if (x==1'b0)
                    next_state=S1;
                else
                    next_state=S0;
            end
            S1: begin
                if (x==1'b0)
                    next_state=S2;
                else
                    next_state=S0;
            end
            S2: begin
                if (x==1'b0)
                    next_state=S3;
                else
                    next_state=S0;
            end
            S3: begin
                if (x==1'b0) begin
                    next_state=S0;
                    y=1'b1;
                end
            else begin
                next_state=S3;
                y=1'b0;
                end
            end
            default: begin
                next_state=S0;
                y=1'b0;
            end
        endcase
    end
endmodule
