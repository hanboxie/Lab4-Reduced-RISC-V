module ALU #(
    parameter DATA_WIDTH = 8,
              CONTROL_SIGNAL = 1
) (
    input logic [CONTROL_SIGNAL-1:0] ALUctrl,
    input logic [DATA_WIDTH-1:0] ALUop1,
    input logic [DATA_WIDTH-1:0] ALUop2,
    output logic [DATA_WIDTH-1:0] SUM,
    output logic EQ //whether ALUop1 and ALUop2 are equal or not
    //can be either 0 or 1
);

if (ALUctrl == 1'b0)
    SUM <= ALUop1 + ALUop2;
if (ALUctrl == 1'b1)
    if (ALUop1 - ALUop2 == DATA_WIDTH{(1'b0)})
        EQ <= 1'b0;
    else
        EQ <= 1'b1;
endmodule
