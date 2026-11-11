module seq_101 (
    input clk,
    input rst,
    input in,
    output reg out
);

    //State coding
    parameter   A = 2'b00,
                B = 2'b01,
                C = 2'b10,
                D = 2'b11;
    
    reg [1:0] state,nxt_state;

    //State reg
    always @(posedge clk or posedge rst) begin
        if (rst)
            state <= A;
        else
            state<=nxt_state; 
    end

    //Next state logic
    always @(*) begin
        case (state)

            A: begin
                if (in)
                    nxt_state=B;
                else
                    nxt_state=A;
            end

            B: begin
                if (in)
                    nxt_state=B;
                else
                    nxt_state=C;
            end

            C: begin
                if (in)
                    nxt_state=D;
                else
                    nxt_state=A;
            end

            D: begin
                if (in)
                    nxt_state=B;
                else    
                    nxt_state=C;
            end

            default: nxt_state=A;
        endcase
    end

    //Moore logic
    always @(*) begin
        if (state==D)
            out=1'b1;
        else    
            out=1'b0;
    end
    
endmodule