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
assign funct3 = instr[14:12];

always_latch @(instr) 
    if (op == 7'b0010011 & funct3 == 3'b000) begin //addi
        RegWrite = 1;
        ALUctrl = 0;
        ALUsrc = 1;
        ImmSrc = 1;
        PCsrc = 0;

end else if (op == 7'b1100011 & funct3 == 3'b001 & EQ == 0) begin  //bne
        RegWrite = 0;
        ALUctrl = 1;
        ALUsrc = 0;
        ImmSrc = 0;
        PCsrc = 1;
end


endmodule
