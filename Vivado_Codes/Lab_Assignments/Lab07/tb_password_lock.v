
`timescale 1ns/1ps

module tb_password_lock;

    reg clk, rst, din;
    wire unlock;

    // DUT instantiation
    password_lock uut (
        .clk(clk),
        .rst(rst),
        .din(din),
        .unlock(unlock)
    );

    // Clock generation
    always #5 clk = ~clk;

    // Task to apply serial input
    task send_bit;
        input bit_value;
        begin
            @(negedge clk);
            din = bit_value;

            #1;
            $display("Time=%0t | din=%b | state=%b | unlock=%b",
                     $time, din, uut.state, unlock);

            @(posedge clk);
            #1;
        end
    endtask

    // Test stimulus
    initial begin

        $dumpfile("password_lock.vcd");
        $dumpvars(0, tb_password_lock);

        clk = 0;
        rst = 1;
        din = 0;

        // Apply reset
        #10;
        rst = 0;

        // Test 1: Correct password 1011
        $display("\nTest 1: Correct Password 1011");

        send_bit(1);
        send_bit(0);
        send_bit(1);
        send_bit(1);

        // Test 2: Incorrect password 1001
        $display("\nTest 2: Incorrect Password 1001");

        send_bit(1);
        send_bit(0);
        send_bit(0);
        send_bit(1);

        // Test 3: Correct password again
        $display("\nTest 3: Correct Password 1011");

        send_bit(1);
        send_bit(0);
        send_bit(1);
        send_bit(1);

        // Test 4: Overlapping detection
        $display("\nTest 4: Overlapping sequence 1011011");

        send_bit(1);
        send_bit(0);
        send_bit(1);
        send_bit(1);
        send_bit(0);
        send_bit(1);
        send_bit(1);

        #10;
        $finish;

    end

endmodule
