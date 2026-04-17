module cocotb_iverilog_dump();
initial begin
    $dumpfile("sim_build/NTT_engine.fst");
    $dumpvars(0, NTT_engine);
end
endmodule
