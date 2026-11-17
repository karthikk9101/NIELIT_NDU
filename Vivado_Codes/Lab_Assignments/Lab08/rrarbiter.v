
/* 3 - Request Round Robin Arbiter */

module roundrobinarbiter(
    input clk,
    input rst,
    input [2:0] req, 
    output reg [2:0] grant
);

    reg [1:0] priority;
    reg [1:0] next_priority;
    reg [2:0] next_grant;

    // Sequential block
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            grant <= 3'b000;
            priority <= 2'b00;
        end
        else begin
            grant <= next_grant;
            priority <= next_priority;
        end
    end

    // Combinational block
    always @(*) begin
        next_grant = 3'b000;
        next_priority = priority;

        case(priority)

            // First priority
            2'b00: begin
                if (req[0]) begin
                    next_grant = 3'b001;
                    next_priority = 2'b01;
                end
                else if (req[1]) begin
                    next_grant = 3'b010;
                    next_priority = 2'b10;
                end
                else if (req[2]) begin
                    next_grant = 3'b100;
                    next_priority = 2'b00;
                end
            end

            // Second priority
            2'b01: begin
                if (req[1]) begin
                    next_grant = 3'b010;
                    next_priority = 2'b10;
                end
                else if (req[2]) begin
                    next_grant = 3'b100;
                    next_priority = 2'b00;
                end
                else if (req[0]) begin
                    next_grant = 3'b001;
                    next_priority = 2'b01;
                end
            end

            // Third priority
            2'b10: begin
                if (req[2]) begin
                    next_grant = 3'b100;
                    next_priority = 2'b00;
                end
                else if (req[0]) begin
                    next_grant = 3'b001;
                    next_priority = 2'b01;
                end
                else if (req[1]) begin
                    next_grant = 3'b010;
                    next_priority = 2'b10;
                end
            end

            default: begin
                next_grant = 3'b000;
                next_priority = 2'b00;
            end

        endcase
    end

endmodule
