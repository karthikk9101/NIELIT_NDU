module tb_and_gate;
    reg A;
    reg B;
    wire C;

and_gate uut (
    .A(A),
    .B(B),
    .C(C));

initial begin
    $monitor (" /time=%t A=%0b | B=%0b | C=%b",$time,A,B,C);
    #10;
    A = 1'b0; B = 1'b0 ; #10;
    A = 1'b0; B = 1'b1 ; #10;
    A = 1'b1; B = 1'b0 ; #10;
    A = 1'b1; B = 1'b1 ; #10;
    $finish;
    end

initial begin
    $dumpfile("and_gate.vcd");
    $dumpvars();
    end

endmodule

