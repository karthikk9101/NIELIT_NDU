`timescale 1ns/1ps

module traffic(
    input clk,
    input rst,
    output reg R,
    output reg G,
    output reg Y
);

    parameter   S0=2'b00,   //Red
                S1=2'b01,   //Green
                S2=2'b10;   //Yellow

    reg [1:0] state;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state<=S0;
        end

        else begin
            case(state)

                S0: state<=S1;  //red to green
                S1: state<=S2;  //green to yellow
                S2: state<=S0;  //yellow to red

                default: state<=S0;
            endcase
        end
    end

    always @(*) begin
        R=1'b0;
        G=1'b0;
        Y=1'b0;
        case(state)
            S0: R=1'b1;
            S1: G=1'b1;
            S2: Y=1'b1;
            default: R<=1'b1;
        endcase
    end
endmodule

