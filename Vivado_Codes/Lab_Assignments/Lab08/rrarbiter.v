`timescale 1ns/1ps

module rrarbiter (
    input clk,
    input rst,
    input [2:0] req,
    output reg [2:0] grant
);
    
    //parameter
    parameter S0 = 2'b00;
    parameter S1 = 2'b01;
    parameter S2 = 2'b10;

    reg [1:0] state;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <=S0;
            grant <=3'b000;
        end
        else begin
            grant<=3'b000;
            case (state)

                S0: begin                   //Case 01
                    if (req[0]) begin
                        grant<=3'b001;
                        state<=S1;
                    end
                    else if (req[1]) begin
                        grant<=3'b010;
                        state<=S2;
                    end
                    else if (req[2]) begin
                        grant<=3'b100;
                        state<=S0;
                    end
                end

                S1: begin                   //Case 02
                    if (req[1]) begin
                        grant<=3'b010;
                        state<=S2;
                    end
                    else if (req[2]) begin
                        grant<=3'b100;
                        state<=S0;
                    end
                    else if (req[0]) begin
                        grant<=3'b001;
                        state<=S1;
                    end
                end

                S2: begin                   //Case 03
                    if (req[2]) begin
                        grant<=3'b100;
                        state<=S0;
                    end
                    else if (req[0]) begin
                        grant<=3'b001;
                        state<=S1;
                    end
                    else if (req[1]) begin
                        grant<=3'b010;
                        state<=S2;
                    end
                end

                default: begin
                    state<=S0;
                    grant<=3'b000;
                end         
            endcase 
        end
    end
endmodule