`timescale 1ns/1ps

module halfadderbeha(
    input a,b,
    output reg sum,
    output reg carry
    );

always @(*) begin
    sum=a^b;
    carry=a&b;
end

endmodule
