module low_power_tb;

reg clk = 0;
reg reset = 1;
reg enable = 0;
reg power_on = 0;
wire [3:0] count_base, count_clk_gate, count_pwr_gate;

// Clock generation
always #5 clk = ~clk;

// Instantiate baseline counter
counter_baseline u1 (
    .clk(clk),
    .reset(reset),
    .count(count_base)
);

// Instantiate clock-gated counter
counter_clk_gate u2 (
    .clk(clk),
    .reset(reset),
    .enable(enable),
    .count(count_clk_gate)
);

// Instantiate power-gated counter
counter_pwr_gate u3 (
    .clk(clk),
    .reset(reset),
    .power_on(power_on),
    .count(count_pwr_gate)
);

initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, low_power_tb);

    // Reset pulse
    #20 reset = 0;

    // All counters run for ten cycles
    #10 enable = 1; power_on = 1; // All active
    #30 enable = 0;               // Clock-gated stops, baseline keeps going
    #20 power_on = 0;             // Power-gated freezes
    #20 enable = 1; power_on = 1; // All active again
    #40 $finish;
end

endmodule
