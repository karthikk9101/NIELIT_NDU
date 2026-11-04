module mini_soc_tb;
    reg clk = 0;
    reg rst = 1;
    reg alu_sel = 0;
    reg mux_sel = 0;
    wire [1:0] soc_out;

    always #5 clk = ~clk;

    mini_soc dut (
        .clk(clk),
        .rst(rst),
        .alu_sel(alu_sel),
        .mux_sel(mux_sel),
        .soc_out(soc_out)
    );

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, mini_soc_tb);

        // Reset release
        #10 rst = 0;

        // Simulate ALU and MUX selections
        #2 alu_sel = 1;
        #3 mux_sel = 1;
        #4 alu_sel = 0;
        #2 mux_sel = 0;
        #5 $finish;
    end

endmodule
