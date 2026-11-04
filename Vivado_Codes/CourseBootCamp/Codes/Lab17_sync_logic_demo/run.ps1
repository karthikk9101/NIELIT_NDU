iverilog -s sync_tb -o sync_logic.vvp reset_sync.v cdc_sync.v top_with_sync.v sync_tb.v
vvp .\sync_logic.vvp
gtkwave .\dump.vcd