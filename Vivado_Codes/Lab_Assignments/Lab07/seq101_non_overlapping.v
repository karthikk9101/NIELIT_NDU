`timescale 1ns/1ps

module seq_101_nonoverlapping (
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

    reg [1:0] state;

    //Transition logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state<=S0;
        end

        else begin
            case(state)

                S0: begin
                    if (x==1'b1)
                        state<=S1;
                    else
                        state<=S0;
                end

                S1: begin
                    if (x==1'b0)
                        state<=S2;
                    else
                        state<=S1;
                end

                S2: begin
                    if (x==1'b1)
                        state<=S3;
                    else
                        state<=S0;
                end

                S3: begin
                    if (x==1'b1)
                        state<=S0;
                    else
                        state<=S0;
                end

                default:
                    state<=S0;
            endcase
        end
    end

    //moore logic
    always @(*) begin
        if (state==S3)
            y=1'b1;
        else
            y=1'b0;
    end
endmodule
