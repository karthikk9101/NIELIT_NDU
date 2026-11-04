`timescale 1ns/1ps

module simple_timer #(
    parameter WIDTH = 8 // Width of timer counter
)(
    input wire clk, // System clock
    input wire rst, // Synchronous reset
    input wire start, // Start timer
    input wire [WIDTH-1:0] load_val, // Initial countdown value
    output reg done // High when timer reaches zero
);

reg [WIDTH-1:0] count; // Timer counter register
reg running; // Indicates timer is active

always @(posedge clk or posedge rst) begin
    if (rst) begin
        count <= 0;
        running <= 0;
        done <= 0;
    end else begin
        if (start) begin
            // Load the preset value and start counting
            count <= load_val;
            running <= 1;
            done <= 0;
        end else if (running) begin
            if (count > 0) begin
                count <= count - 1; // Decrement counter
            end else begin
                running <= 0; // Stop timer
                done <= 1; // Raise done signal
            end
        end
    end
end

endmodule
