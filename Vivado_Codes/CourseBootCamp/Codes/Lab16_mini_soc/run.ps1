iverilog -s mini_soc_tb -o soc.vvp counter.v alu.v mx2x1.v mini_soc.v mini_soc_tb.v
vvp .\soc.vvp
gtkwave .\dump.vcd
