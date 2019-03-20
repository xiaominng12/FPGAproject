`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:19:26 06/17/2018
// Design Name:   bit_syn
// Module Name:   C:/Users/ZYF/Desktop/phase_band_top2/test_jidai.v
// Project Name:  phase_band_top2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bit_syn
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_jidai;

	// Inputs
	reg clk;
	reg reset;
	reg key;
	reg key1;
	// Outputs
	wire [7:0] data_out;
	wire [7:0] led;
   wire rxd;
	// Instantiate the Unit Under Test (UUT)
	bit_syn uut (
		.clk(clk), 
		.reset(reset), 
      .key(key), 
 		.key1(key1), 
		.data_out(data_out), 
      .led(led), 
      .rxd(rxd)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		key = 1;
		reset = 0;
		// Wait 100 ns for global reset to finish
		#3260 reset = 1;
		#2249920 key=0;
		#2249920 key=1;
		// Add stimulus here
	end
   always #2.5 clk = ~clk;
		
endmodule

