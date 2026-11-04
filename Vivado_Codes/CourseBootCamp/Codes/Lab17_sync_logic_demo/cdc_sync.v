// Safely captures an asynchronous data input into the clk domain
module cdc_sync (
    input clk, // Destination clock
    input async_in, // Asynchronous input signal
    output reg sync_out // Synchronized output
);

reg stage1; // Intermediate register

// 2-stage flip-flop synchronizer
always @(posedge clk) begin
    stage1 <= async_in; // First flop captures async signal
    sync_out <= stage1; // Second flop reduces metastability
end

endmodule
