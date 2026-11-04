#Compilation
iverilog -s simple_timer_tb -o simple_timer.vvp simple_timer.v simple_timer_tb.v

#vvp compilation
vvp .\simple_timer.vvp

#gtkwave
gtkwave .\simple_timer.vcd