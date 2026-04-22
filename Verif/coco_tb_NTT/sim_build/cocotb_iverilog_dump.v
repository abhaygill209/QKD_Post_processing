module cocotb_iverilog_dump();
initial begin
    $dumpfile("sim_build/NTT_axis_ip.fst");
    $dumpvars(0, NTT_axis_ip);
end
endmodule
