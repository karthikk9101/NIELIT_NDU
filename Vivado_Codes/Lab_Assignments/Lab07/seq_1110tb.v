`timescale 1ns/1ps

module seq_1110tb;

    reg clk, rst, x;
    wire y;

    // Connect the design
    seq_1110 DUT (.clk(clk), .rst(rst), .x(x), .y(y));

    // Clock: 10 ns period
    initial clk = 0;
    always #5 clk = ~clk;

    // Send one bit and check the output
    task send_bit(input bit_in, input expected_y);
        begin
            @(negedge clk);     // change input at the falling edge
            x = bit_in;
            //#2;                 // wait a little so the Mealy output settles
            if (y == expected_y)
                $display("PASS: x=%b  y=%b", x, y);
            else
                $display("FAIL: x=%b  y=%b  (expected %b)", x, y, expected_y);
        end
    endtask

    initial begin
        $dumpfile("seq_1110.vcd");
        $dumpvars(0, seq_1110tb);

        // Reset
        rst = 1; x = 0;
        #12;
        rst = 0;

        $display("--- Sequence 1110 (should detect) ---");
        send_bit(1, 0);
        send_bit(1, 0);
        send_bit(1, 0);
        send_bit(0, 1);   // y goes high here

        $display("--- Sequence 1101 (should NOT detect) ---");
        send_bit(1, 0);
        send_bit(1, 0);
        send_bit(0, 0);
        send_bit(1, 0);

        $display("--- Sequence 11110 (should detect) ---");
        send_bit(1, 0);
        send_bit(1, 0);
        send_bit(1, 0);
        send_bit(1, 0);
        send_bit(0, 1);   // y goes high here

        #10;
        $finish;
    end

endmodule