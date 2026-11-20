`timescale 1ns/1ps

module round_robin_arbiter (
    input clk,
    input rst,
    input [2:0] req,
    output reg [2:0] grant
);
    reg [1:0] priority;

    always @(*) begin
        grant=3'b000;
    
        case (priority)
            
            2'b00: begin
                if (req[0])
                    grant=3'b001;
                else if (req[1])
                    grant=3'b010;
                else if (req[2])
                    grant=3'b100; 
            end

            2'b01: begin
                if (req[1])
                    grant=3'b010;
                else if (req[2])
                    grant=3'b100;
                else if (req[0])
                    grant=3'b001;
            end

            2'b10: begin
                if (req[2])
                    grant=3'b100;
                else if (req[0])
                    grant=3'b001;
                else if (req[1])
                    grant=3'b010;
            end            
            default: 
                grant=3'b000;
        endcase
    end

    always @(posedge clk or posedge rst) begin
        if (rst)
            priority<=2'b00;
        else begin
            case (grant)
                3'b001: priority <= 2'b01;
                3'b010: priority <= 2'b10;
                3'b100: priority <= 2'b00;
                default: priority <= priority;
            endcase
        end
    end
endmodule