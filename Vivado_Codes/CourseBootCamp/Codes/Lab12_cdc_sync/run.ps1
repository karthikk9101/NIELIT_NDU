# Compile the design and testbench
iverilog -g2012 -s cdc_sync_tb -o cdc_sync_sim.vvp cdc_sync.v cdc_sync_tb.v
if ($LASTEXITCODE -ne 0) { throw "Compilation failed" }

# Run the simulation
vvp .\cdc_sync_sim.vvp
if ($LASTEXITCODE -ne 0) { throw "Simulation failed" }

# Open the waveform, if GTKWave is installed
gtkwave .\dump.vcd