`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:46:25 06/11/2018
// Design Name:   phase_band_top
// Module Name:   E:/ISEproject/phase_band_top2/test_tb.v
// Project Name:  phase_band_top2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: phase_band_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_tb;

	// Inputs
	reg clk;
	reg clk_ip;
	reg rst_n;
	reg [20:0] Ic;
	reg [20:0] Qc;

	// Outputs
	
	wire [20:0] freq_part;
	integer fid1,fid2;
	integer rc_x1,rc_x2;
	integer datain1,datain2;

	// Instantiate the Unit Under Test (UUT)
	phase_band_top uut (
		.clk(clk), 
		.clk_ip(clk_ip), 
		.rst_n(rst_n), 
		.Ic(Ic), 
		.Qc(Qc),
		.freq_part(freq_part)	
	);

	initial begin
		// Initialize Inputs
		fid1 = $fopen("IC.txt","r");
		fid2 = $fopen("QC.txt","r");
		clk = 0;
		clk_ip = 0;
		rst_n = 0;
		Ic = 0;
		Qc = 0;

		// Wait 100 ns for global reset to finish
		#815 rst_n = 1;

	end
	always #815 clk = ~clk;
	always #18.111 clk_ip = ~clk_ip;  //45±¶ÆµÂÊ
	always @(posedge clk)
	begin
	   rc_x1 = $fscanf(fid1,"%d",datain1);
		rc_x2 = $fscanf(fid2,"%d",datain2);
		Ic <= datain1;
		Qc <= datain2;
	end
      
endmodule

