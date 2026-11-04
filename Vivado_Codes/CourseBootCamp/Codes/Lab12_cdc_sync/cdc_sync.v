// 2-stage synchronizer module to handle asynchronous input
module cdc_synchronizer (
    input clk,        // Clock input
    input async_in,   // Asynchronous input signal
    output reg synced // Synchronized output signal
);

reg stage1; // First-stage flip-flop

// Two-stage flip-flop chain for synchronization
always @(posedge clk) begin
    stage1 <= async_in;
    synced <= stage1;
end

endmodule