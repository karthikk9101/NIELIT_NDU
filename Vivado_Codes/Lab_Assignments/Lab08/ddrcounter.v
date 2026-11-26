`timescale 1ns/1ps

module ddrcounter(
    input clk,
    input rst,
    output wire [3:0] count
);

    reg [3:0] poscount;
    reg [3:0] negcount;

    always @(posedge clk) begin
        if (rst)
            poscount<=4'b0000;
        else
            poscount<=poscount+4'b0001;  
    end

    always @(negedge clk) begin
    if (rst)
        negcount<=4'b0000;
    else
        negcount<=negcount-4'b0001;  
    end

    assign count=poscount+negcount;
endmodule