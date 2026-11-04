// Converts an asynchronous reset into a safe, glitch-free synchronous reset
module reset_sync (
    input clk, // Destination clock domain
    input async_reset, // Asynchronous reset input
    output reg sync_reset // Synchronized reset output
);

reg sync_ff1; // First flip-flop for capturing async_reset

// Use both posedge clk and posedge async_reset for immediate assertion
always @(posedge clk or posedge async_reset) begin
    if (async_reset) begin
        // Immediate assertion of reset in both flops
        sync_ff1 <= 1'b1;
        sync_reset <= 1'b1;
    end else begin
        // Deassertion happens synchronously across clock edges
        sync_ff1 <= 1'b0;
        sync_reset <= sync_ff1;
    end
end

endmodule
