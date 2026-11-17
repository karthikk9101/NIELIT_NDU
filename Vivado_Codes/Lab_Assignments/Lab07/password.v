`timescale 1ns/1ps


module password (
    input clk,
    input rst,
    input x,
    output reg unlock
);

    // State declaration
    parameter S0 = 2'b00,
              S1 = 2'b01,
              S2 = 2'b10,
              S3 = 2'b11;

    reg [1:0] state, next_state;

    // Sequential block
    always @(posedge clk or posedge rst) begin
        if (rst)
            state <= S0;
        else
            state <= next_state;
    end

    // Combinational next-state and output logic
    always @(*) begin

        next_state = state;
        unlock = 1'b0;

        case (state)

            S0: begin
                if (x == 1'b1)
                    next_state = S1;
                else
                    next_state = S0;
            end

            S1: begin
                if (x == 1'b0)
                    next_state = S2;
                else
                    next_state = S1;
            end

            S2: begin
                if (x == 1'b1)
                    next_state = S3;
                else
                    next_state = S0;
            end

            S3: begin
                if (x == 1'b1) begin
                    next_state = S1;
                    unlock = 1'b1;
                end
                else begin
                    next_state = S2;
                end
            end

            default: begin
                next_state = S0;
                unlock = 1'b0;
            end

        endcase
    end

endmodule
