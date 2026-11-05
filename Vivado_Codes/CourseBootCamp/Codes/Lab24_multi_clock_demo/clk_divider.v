// Clock divider to generate slower clock (divide-by-4 in this example)
module clk_divider (
    input clk_in,
    input rst,
    output reg clk_out
);

reg [1:0] counter; // 2-bit counter to divide clock

always @(posedge clk_in or posedge rst) begin
    if (rst) begin
        counter <= 2'b0;
        clk_out <= 0;
    end else begin
        counter <= counter + 1;
        if (counter == 2'b11)
            clk_out <= ~clk_out; // Toggle every 4 input clocks
    end
end

endmodule
