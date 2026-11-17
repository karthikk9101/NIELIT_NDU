
`timescale 1ns/1ps

module tb_seq_101;

    reg clk;
    reg rst;
    reg x;
    wire y;

    // DUT instantiation
    seq_101 DUT (
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

            @(posedge clk);
            #1;

            $display("Time=%0t | Input=%b | Output=%b",
                     $time, x, y);
        end
    endtask

    initial begin

        $dumpfile("seq_101.vcd");
        $dumpvars();

        clk = 0;
        rst = 1;
        x = 0;

        // Reset
        #12;
        rst = 0;

        $display("\n--- Overlapping Sequence Detection: 10101 ---");

        send_bit(1);
        send_bit(0);
        send_bit(1);
        send_bit(0);
        send_bit(1);

        #10;
        $finish;

    end

endmodule
