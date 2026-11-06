// Synchronous counter with enable and reset
module counter #(parameter WIDTH = 8) (
    input clk,                 // Clock input
    input rst,                 // Asynchronous reset
    input en,                  // Enable increment
    output reg [WIDTH-1:0] count // Count output
);

always @(posedge clk or posedge rst) begin
    if (rst)
        count <= 0;
    else if (en)
        count <= count + 1;
end

endmodule
