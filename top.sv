module top #(
        parameter ADDRESS_WIDTH = 16,
                  DATA_WIDTH = 32
) (
    input logic clk,
    input logic rst,
    output logic a0
);

logic [DATA_WIDTH-1:0] instr;
logic [ADDRESS_WIDTH-1:0] rs1;
logic [ADDRESS_WIDTH-1:0] rs2;
logic [ADDRESS_WIDTH-1:0] rd;



endmodule