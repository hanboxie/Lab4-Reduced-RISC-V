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
logic [1:0]         ALUOp;
logic               Branch;

assign op = instr[6:0];
assign funct3 = instr[14:12];

always_comb begin
    casez(op)
    7'b0010011: begin
        assign RegWrite = 1;
        //ALUctrl = 0;
        assign ALUsrc = 1;
        assign ImmSrc = 1;
        assign ALUOp = 2'b10;
        assign Branch = 0;
    end
    7'b1100011: begin
        assign RegWrite = 0;
        //ALUctrl = 1;
        assign ALUsrc = 0;
        assign ImmSrc = 0;
        assign ALUOp = 2'b01;
        assign Branch = 1;
    end
    endcase

    casez(Branch)

    1'b1: if (EQ)
            assign PCsrc = 0;
          else
            assign PCsrc = 1;
    0'b0: assign PCsrc = 0;

    endcase

    casez(ALUOp)
    2'b00: assign ALUctrl = 1;
    2'b01: assign ALUctrl = 0;
    2'b10: if (funct3 == 000)
            assign ALUctrl = 1;
           else assign ALUctrl = 0;
    endcase
end

endmodule
