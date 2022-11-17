module Instr_Mem # (
    parameter   ADDRESS_WIDTH = 32,
                DATA_WIDTH = 32
)(
    input logic [ADDRESS_WIDTH-1:0] A,
    output logic [DATA_WIDTH-1:0] RD
);

logic [DATA_WIDTH-1:0] array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display ("Loading Instr_Mem.");
        $readmemh("counter.mem", array); 
end;

assign RD <= array [A];

endmodule
