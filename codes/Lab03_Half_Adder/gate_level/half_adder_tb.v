`timescale 1ns/1ps

module half_adder_tb;
    reg a,b;
    wire sum,carry;

    half_adder_gate uut(
        .a(a),
        .b(b),
        .sum(sum),
        .carry(carry)
        );

initial begin

$display("GATE LEVEL HALF ADDER TEST");
$display("a  b | sum  carry");
$monitor("%b  %b | %b  %b",a,b,sum,carry);

    a = 0; b = 0; #10;
    a = 0; b = 1; #10;
    a = 1; b = 0; #10;
    a = 1; b = 1; #10;

$finish;

end

initial begin
$dumpfile("half_adder_gate.vcd");
$dumpvars(0,half_adder_tb);
end

endmodule
