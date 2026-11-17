
`timescale 1ns/1ps

module seq_1110tb;

    reg clk;
    reg rst;
    reg x;
    wire y;

    // DUT instantiation
    seq_1110 DUT (
        .clk(clk),
        .rst(rst),
        .x(x),
        .y(y)
    );

    // Clock generation
    always #5 clk = ~clk;

    // Task to apply serial input
    task send_bit;
        input bit_in;
        begin
            @(negedge clk);
            x = bit_in;

            #1;
            $display("Time=%0t | Input=%b | State=%b | Next State=%b | Output=%b",
                     $time, x, DUT.state, DUT.next_state, y);

            @(posedge clk);
            #1;
        end
    endtask

    initial begin

        $dumpfile("seq_1110.vcd");
        $dumpvars();

        clk = 0;
        rst = 1;
        x = 0;

        // Reset
        #12;
        rst = 0;

        $display("\n--- Correct Sequence: 1110 ---");

        send_bit(1);
        send_bit(1);
        send_bit(1);
        send_bit(0);

        #10;

        $display("\n--- Incorrect Sequence: 1101 ---");

        send_bit(1);
        send_bit(1);
        send_bit(0);
        send_bit(1);

        #10;

        $display("\n--- Another Correct Sequence: 1110 ---");

        send_bit(1);
        send_bit(1);
        send_bit(1);
        send_bit(0);

        #10;
        $finish;

    end

endmodule
