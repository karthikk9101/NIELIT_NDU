`timescale 1ns/1ps

module password_tb;

    reg clk;
    reg rst;
    reg x;
    wire unlock;

    // DUT instantiation
    password DUT (
        .clk(clk),
        .rst(rst),
        .x(x),
        .unlock(unlock)
    );

    // Clock generation
    always #5 clk = ~clk;

    // Task to enter one password bit
    task enter_bit;
        input bit_in;
        begin
            @(negedge clk);
            x = bit_in;
            @(posedge clk);
            #1;
            $display("Time=%0t | Input=%b | Unlock=%b",
                      $time, x, unlock);
        end
    endtask

    initial begin

        $dumpfile("password.vcd");
        $dumpvars();

        clk = 0;
        rst = 1;
        x = 0;

        // Apply reset
        #12;
        rst = 0;

        $display("\n--- Correct Password: 1011 ---");

        enter_bit(1);
        enter_bit(0);
        enter_bit(1);
        enter_bit(1);

        #10;

        $display("\n--- Incorrect Password: 1001 ---");

        enter_bit(1);
        enter_bit(0);
        enter_bit(0);
        enter_bit(1);

        #10;

        $display("\n--- Another Correct Password: 1011 ---");

        enter_bit(1);
        enter_bit(0);
        enter_bit(1);
        enter_bit(1);

        #10;
        $finish;

    end

endmodule
