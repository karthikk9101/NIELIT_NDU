`timescale 1ns/1ps

// Mealy FSM: detects 1110 (overlap is not possible for this pattern)
module seq_1110 (
    input      clk,
    input      rst,     // async, active-high
    input      x,
    output reg y
);

    parameter S0 = 2'b00,   // no progress
              S1 = 2'b01,   // seen 1
              S2 = 2'b10,   // seen 11
              S3 = 2'b11;   // seen 111 (stays here while x = 1)

    reg [1:0] state, next_state;

    // State register
    always @(posedge clk or posedge rst) begin
        if (rst) state <= S0;
        else     state <= next_state;
    end

    // Next-state and Mealy output logic
    always @(*) begin
        next_state = S0;
        y          = 1'b0;

        case (state)
            S0: next_state = x ? S1 : S0;
            S1: next_state = x ? S2 : S0;
            S2: next_state = x ? S3 : S0;
            S3: begin
                if (x) next_state = S3;
                else begin
                    next_state = S0;
                    y          = 1'b1;   // 111 followed by 0
                end
            end
            default: next_state = S0;
        endcase
    end

endmodule