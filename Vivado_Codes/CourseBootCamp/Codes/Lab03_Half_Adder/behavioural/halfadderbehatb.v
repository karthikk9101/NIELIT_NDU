`timescale 1ns/1ps

module halfadderbehatb;
    reg a,b;
    wire sum,carry;

    halfadderbeha uut(
        .a(a),
        .b(b),
        .sum(sum),
        .carry(carry)
        );

    initial begin
        $monitor("%b %b %b %b",a,b,sum,carry);

        a = 0; b = 0; #10;
        a = 0; b = 1; #10;
        a = 1; b = 0; #10;
        a = 1; b = 1; #10;

        $finish;

        end

initial begin
    $dumpfile("halfadderbeha.vcd");
    $dumpvars(0,halfadderbeha);
end

endmodule

