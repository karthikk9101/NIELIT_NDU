// Testbench for CDC synchronizer
module cdc_sync_tb;

reg clk = 0;       // Clock signal
reg async_in = 0;  // Asynchronous input
wire synced;       // Output from synchronizer

// Clock generation
always #5 clk = ~clk;

// Instantiate the DUT
cdc_synchronizer uut (
    .clk(clk),
    .async_in(async_in),
    .synced(synced)
);

// Apply transitions not aligned to clk
initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, cdc_sync_tb);

    #12 async_in = 1;
    #7 async_in = 0;
    #6 async_in = 1;
    #9 async_in = 0;
    #50 $finish;
end

endmodule