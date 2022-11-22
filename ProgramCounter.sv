module ProgramCounter#(
    parameter WIDTH = 32
)(
    input logic      clk,
    input logic      rst,
    input logic [WIDTH-1:0]  next_PC
    output logic [WIDTH-1:0]  count
);

always_ff @(posedge clk, posedge rst)
    if(rst) count <= 32'b0;
    else    count <= next_PC 

endmodule
