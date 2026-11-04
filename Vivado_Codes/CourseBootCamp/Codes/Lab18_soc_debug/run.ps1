iverilog -s soc_tb -o soc.vvp alu.v uart_stub.v soc_top.v soc_tb.v
vvp .\soc.vvp
gtkwave .\soc_debug.vcd