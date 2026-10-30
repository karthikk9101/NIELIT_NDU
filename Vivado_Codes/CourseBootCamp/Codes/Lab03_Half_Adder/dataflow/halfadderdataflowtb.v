`timescale 1ns/1ps

module halfadderdataflowtb;
    reg a,b;
    wire sum,carry;

    halfadderdataflow uut(
        .a(a),
        .b(b),
        .sum(sum),
        .carry(carry)
        );

initial begin
    $display("DATAFLOW HALF ADDER TEST");
    $display("A B | Sum Carry");
    $monitor("%b %b | %b %b",a,b,sum,carry);
    
    a = 0; b = 0; #10;    
    a = 0; b = 1; #10;
    a = 1; b = 0; #10;
    a = 1; b = 1; #10;

    $finish;
end

initial begin
    $dumpfile("halfadderdataflow.vcd");
    $dumpvars(0,halfadderdataflowtb);
end

endmodule
