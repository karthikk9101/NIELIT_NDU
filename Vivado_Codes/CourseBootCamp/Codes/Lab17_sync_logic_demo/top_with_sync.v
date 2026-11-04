// Top module that integrates reset and CDC synchronizers
module top_with_sync (
    input clk, // Main clock input
    input async_reset, // Global asynchronous reset
    input async_signal, // CDC input from another domain
    output synced_reset, // Cleaned reset
    output synced_signal // Cleaned signal
);

// Instantiate the reset synchronizer
reset_sync u_reset_sync (
    .clk(clk),
    .async_reset(async_reset),
    .sync_reset(synced_reset)
);

// Instantiate the 2-stage CDC synchronizer
cdc_sync u_cdc_sync (
    .clk(clk),
    .async_in(async_signal),
    .sync_out(synced_signal)
);

endmodule
