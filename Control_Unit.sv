module Control_Unit (
    input logic         EQ,
    input logic  [31:0]       instr,
    output logic        RegWrite,
    output logic        ALUctrl,
    output logic        ALUsrc,
    output logic        ImmSrc,
    output logic        PCsrc
);

logic [6:0]         op;
logic [2:0]         funct3;

assign op = instr[6:0];
assign funct3 = instr[14:12]


if (op == 7'b0010011 & funct3 == 3'b111) begin //addi
    assign RegWrite = 1;
    assign ALUctrl = 0;
    assign ALUsrc = 1;
    assign ImmSrc = 1;
    assign PCsrc = 0;

end else if (op == 7b'1100011 & funct3 == 3'b001 & eq == 0) begin  //bne
    assign RegWrite = 0;
    assign ALUctrl = 1;
    assign ALUsrc = 0;
    assign ImmSrc = 0;
    assign PCsrc = 1;

end

endmodule
