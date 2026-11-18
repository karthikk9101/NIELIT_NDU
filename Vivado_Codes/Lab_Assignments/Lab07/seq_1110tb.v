
`timescale 1ns/1ps

module seq_1110_tb;

    reg clk;
    reg rst;
    reg x;
    wire y;

    // DUT Instantiation
    seq_1110 uut (
        .clk(clk),
        .rst(rst),
        .x(x),
        .y(y)
    );

    // Clock generation: 10 ns period
    always #5 clk = ~clk;

    // Task to apply one input bit
    task send_bit(input bit_value);
        begin
            @(negedge clk);
            x = bit_value;

            // Allow Mealy output to settle
            #1;
            $display("Time=%0t | Input=%b | State=%b | Output=%b",
                     $time, x, uut.state, y);

            @(posedge clk);
            #1;
        end
    endtask

    // Task to reset FSM
    task reset_fsm;
        begin
            @(negedge clk);
            rst = 1'b1;
            x = 1'b0;

            @(negedge clk);
            rst = 1'b0;
        end
    endtask

    initial begin

        // Initialize signals
        clk = 0;
        rst = 0;
        x = 0;

        // Waveform generation
        $dumpfile("seq_1110.vcd");
        $dumpvars(0, seq_1110_tb);

        // Apply reset
        reset_fsm();

        $display("\n--- TEST 1: Correct sequence 1110 ---");
        send_bit(1);
        send_bit(1);
        send_bit(1);
        send_bit(0);

        $display("\n--- TEST 2: Incorrect sequence 1101 ---");
        reset_fsm();
        send_bit(1);
        send_bit(1);
        send_bit(0);
        send_bit(1);

        $display("\n--- TEST 3: Sequence 11110 ---");
        reset_fsm();
        send_bit(1);
        send_bit(1);
        send_bit(1);
        send_bit(1);
        send_bit(0);

        $display("\n--- TEST 4: Sequence 11101110 ---");
        reset_fsm();
        send_bit(1);
        send_bit(1);
        send_bit(1);
        send_bit(0);
        send_bit(1);
        send_bit(1);
        send_bit(1);
        send_bit(0);

        #10;
        $display("\nSimulation completed.");
        $finish;

    end

endmodule
