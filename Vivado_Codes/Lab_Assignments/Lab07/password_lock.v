
module password_lock (
    input clk,
    input rst,
    input din,
    output reg unlock
);

    // State encoding
    parameter S0 = 2'b00,
              S1 = 2'b01,
              S2 = 2'b10,
              S3 = 2'b11;

    reg [1:0] state, next_state;

    // State register
    always @(posedge clk or posedge rst) begin
        if (rst)
            state <= S0;
        else
            state <= next_state;
    end

    // Next state and Mealy output logic
    always @(*) begin

        next_state = S0;
        unlock = 1'b0;

        case (state)

            S0: begin
                if (din)
                    next_state = S1;
                else
                    next_state = S0;
            end

            S1: begin
                if (din)
                    next_state = S1;
                else
                    next_state = S2;
            end

            S2: begin
                if (din)
                    next_state = S3;
                else
                    next_state = S0;
            end

            S3: begin
                if (din) begin
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
