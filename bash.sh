#!/bin/bash

echo "======================================"
echo "   NTT Generator Flow with N = $N"
echo "======================================"

# Stop on error
set -e

# Default N
N=${1:-16}

echo ""
echo "[1/2] Generating Twiddle Factors..."
python3 $(pwd)/RTL/TwiddleFactors/twiddle_factor_generator.py $N

echo ""
echo "[2/2] Generating RTL..."
python3 $(pwd)/RTL/Twiddle_ROM_inst/NTT_engine_HDL.py $N

echo ""
echo "======================================"
echo "   All files generated successfully!"
echo "======================================"