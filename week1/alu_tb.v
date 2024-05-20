`timescale 10ns/10ps

module testbench_alu();
 wire 4'b0 a1, 4'b0 a2, 2'b0 operation;
// wire a1, a2, operation;
 reg [3:0] out;

 alu alu1(.a1(a1),.a2(a2),.operation(operation),.out(out));

initial begin
        $dumpfile("waveform_alu.vcd");
        $dumpvars(0, testbench_alu);
        a1 = 4'b0;
        a2 = 4'b1;
        operation = 2'b00;

        #10;
        a1 = 4'b1;
        a2 = 4'b1;
        operation = 2'b00;


        #10;
        a1 = 4'b1;
        a2 = 4'b0;
        operation = 2'b10;


        #10;

        $finish;
end

always @(*) begin
        $monitor ("Time: %0d, Din: %b, reset: %b, qout: %b", $time, Din, reset, qout);
end

endmodule
