	module wrapper (
	// input
	input logic [7:0] SW,
	// output
	output logic [2:0] LEDR
	);
	design_1 dut (
	.data0_i (SW[2:0] ),
	.data1_i (SW[5:3] ),
	.sel_i (SW[7:6] ),
	.result_o(LEDR[2:0])
	);
	endmodule : wrapper
