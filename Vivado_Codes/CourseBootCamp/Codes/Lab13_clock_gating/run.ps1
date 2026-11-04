$ErrorActionPreference = "Stop"

iverilog -g2012 -s ff_tb -o ff_sim.vvp ff_no_gating.v ff_with_gating.v ff_tb.v

if ($LASTEXITCODE -ne 0) {
    throw "Icarus compilation failed."
}

vvp .\ff_sim.vvp

if ($LASTEXITCODE -ne 0) {
    throw "Simulation failed."
}

if (Get-Command gtkwave -ErrorAction SilentlyContinue) {
    gtkwave .\dump.vcd
} else {
    Write-Host "Simulation finished. GTKWave isn't installed or isn't on PATH; waveform is in dump.vcd."
}