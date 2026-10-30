`timescale 1ns/1ps

module dwncounter(
    input clk,reset,
    output reg [3:00] count
    );

    always @(posedge clk or posedge reset) begin
        if (reset)
            count <= 4'b1111;
        else
            count <= count -1;
    end
endmodule
