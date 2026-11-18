
`timescale 1ns/1ps

module traffic_tb;

    reg clk;
    reg rst;

    wire R;
    wire G;
    wire Y;

    // DUT Instantiation
    traffic uut (
        .clk(clk),
        .rst(rst),
        .R(RD),
        .G(G),
        .Y(Y)
    );

    // Clock generation: 10 ns period
    always #5 clk = ~clk;

    initial begin

        // Initialize signals
        clk = 1'b0;
        rst = 1'b0;

        // Generate waveform
        $dumpfile("traffic.vcd");
        $dumpvars();

        $display("Time\tRESET\tSTATE\tRED\tGREEN\tYELLOW");
        $monitor("%0t\t%b\t%b\t%b\t%b\t%b",
                 $time, rst, uut.state, R, G, Y);

        // Apply reset
        #2 rst = 1'b1;
        #4 rst = 1'b0;

        // Allow FSM to run for several clock cycles
        #80;

        #90 rst=1'b1;
        #100 rst=1'b0;

        $display("Simulation completed.");
        $finish;

    end

endmodule
