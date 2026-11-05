module counter_pwr_gate (
    input wire clk,
    input wire reset,
    input wire power_on, // Simulated power control
    output reg [3:0] count
);

always @(posedge clk or posedge reset) begin
    if (reset)
        count <= 0;
    else if (power_on) // Only increment if powered
        count <= count + 1;
    // else retain last value (like powered-off block)
end

endmodule
