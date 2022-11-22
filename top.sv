module top #(
        parameter ADDRESS_WIDTH = 16,
                  DATA_WIDTH = 32
) (
    input logic clk,
    input logic rst,
    output logic a0
);

//green 
logic [DATA_WIDTH-1:0] instr;
//blue
logic [ADDRESS_WIDTH-1:0] rs1;
logic [ADDRESS_WIDTH-1:0] rs2;
logic [ADDRESS_WIDTH-1:0] rd;
//purple
logic RegWrite;
logic ALUctrl;
logic ALUsrc;
logic ImmSrc;
logic PCsrc;
//yellow
logic ALUop1;
logic ALUop2;
logic regOp2;
logic ALUout;
logic EQ;
//orange
logic [DATA_WIDTH-1:0] ImmOp;
logic [DATA_WIDTH-1:0] PC;

PC_top pc_top_instance (
    .clk (clk),
    .rst (rst),
    .ImmOp(ImmOp),
    .PC (PC)
);

Instr_Mem instr_mem_instance (
    .A (PC),
    .RD (instr)
);

Control_Unit control_unit_instance(
    .EQ (EQ),
    .instr (instr),
    .RegWrite (Regwrite),
    .ALUctrl (ALUctrl),
    .ALUsrc (ALUsrc),
    .ImmSrc (ImmSrc),
    .PCsrc (PCsrc)
)

Sign_extend sign_extend_instance(
    .ImmSrc (ImmSrc),
    .
)


endmodule