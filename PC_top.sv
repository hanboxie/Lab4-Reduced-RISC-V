module PC_top #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic [WIDTH-1:0] ImmOp,
    output logic [WIDTH-1:0] PC
);

 logic [WIDTH-1:0]  inc_PC;
 logic [WIDTH-1:0]  branch_PC;
 assign inc_PC = PC+4;
 assign branch_PC = PC + ImmOp;


  mux1 Mux (
    .PCsrc  (PCsrc),
    .inc_PC (inc_PC),
    .branch_PC (branch_PC),
    .next_PC (next_PC)
  );

  ProgramCounter ProgramCounter (
    .clk (clk),
    .rst (rst),
    .next_PC (next_PC),
    .ProgramCounter(ProgramCounter)
  );

endmodule
