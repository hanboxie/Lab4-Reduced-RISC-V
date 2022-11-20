module Sign_extend (
    input logic         ImmSrc,
    input logic [11:0]  instr,
    output logic [31:0] ImmOp
);


always @ *
if (ImmSrc)
    if (instr[11])
        assign ImmOp = ({20'hFFFFF, instr});
    else
        assign ImmOp = ({20'b0, instr});

else
    assign ImmOp = ({20'b0, instr});

endmodule
