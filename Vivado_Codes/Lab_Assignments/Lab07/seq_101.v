`timescale 1ns/1ps

module seq_101 (
    input clk,
    input rst,
    input x,
    output reg y
);
    
    //Decleration

    parameter S0=2'b00;
    parameter S1=2'b01;
    parameter S2=2'b10;
    parameter S3=2'b11;

    reg [1:0] state, next_state;

    always @(posedge clk or posedge rst) begin
        if (rst)
            state<=S0;
        else
            state <=next_state; 
    end

    //nxt state logic
    always @(*) begin
        next_state=state;

        case(state)

            S0: begin
                if (x==1'b0)
                    next_state=S0;
                else
                    next_state=S1;
            end

            S1: begin
                if (x==1'b0)
                    next_state=S2;
                else
                    next_state=S1;
            end

            S2: begin
                if (x==1'b0)
                    next_state=S0;
                else
                    next_state=S3;
            end

            S3: begin
                if (x==1'b0)
                    next_state=S2;
                else
                    next_state=S1;
            end

            default:
                next_state=S0;
        endcase
    end

endmodule
