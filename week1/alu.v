module alu (input [3:0] a1, input [3:0] a2, input [1:0] operation,  output reg [3:0] out);

always @(*)
begin
	case (operation)
		2'b00: out = a1 + a2;
		2'b01: out = a1 - a2;
		2'b10: out = a1 & a2;
		2'b11: out = a1 | a2;
		default: out = 4'b0;
	endcase
end


endmodule
