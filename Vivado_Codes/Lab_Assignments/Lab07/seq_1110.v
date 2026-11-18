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

    reg [1:0] state;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= S0;
        end

        else begin
            case (state)

                S0: begin
                    if (x==1'b1)
                        state<=S1;
                    else
                        state<=S0;
                end

                S1: begin
                    if (x==1'b1)
                        state<=S2;
                    else
                        state<=S0;
                end

                S2: begin
                    if (x==1'b1)
                        state<=S3;
                    else
                        state<=S0;
                end
                S3: begin
                    if (x==1'b0)
                        state<=S0;
                    else
                        state<=S3;
                end      
                default: state <=S0;
            endcase
        end
    end

    always @(*) begin
        if ((state==S3) && (x==1'b0))
            y=1'b1;
        else
            y=1'b0;
    end
endmodule

