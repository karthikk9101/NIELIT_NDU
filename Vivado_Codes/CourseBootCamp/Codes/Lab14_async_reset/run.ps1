# Compile the design and testbench
iverilog -g2012 -s async_reset_tb -o async_reset.vvp async_reset_ff.v async_reset_tb.v
if ($LASTEXITCODE -ne 0) { throw "Compilation failed" }

# Run the simulation
vvp .\async_reset.vvp
if ($LASTEXITCODE -ne 0) { throw "Simulation failed" }

# Open the waveform, if GTKWave is installed
gtkwave .\async_reset.vcd