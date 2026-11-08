module reset_top_tb;
    reg clk=0;
    reg arst_n=1;
    wire [7:0] count;
    wire srst_n;
    reset_top uut(
        .clk(clk),
        .arst_n(arst_n),
        .count(count),
        .srst_n(srst_n)
    );

    always #5 clk=~clk;
    initial begin
        
    end