`timescale 1ns/1ps

module async_reset_ff (
    
    input clk,
    input rst_n,
    input d,
    output reg q
    
);

//Reset has pripority and is sampled on negative edges
always @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        q <=0;
    else 
        q<=d;
end 
endmodule
