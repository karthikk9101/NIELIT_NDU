iverilog -s mini_soc_tb -o mini_soc.vvp counter.v alu.v mux.v mini_soc.v mini_soc_tb.v
vvp .\mini_soc.vvp
gtkwave .\dump.vcd