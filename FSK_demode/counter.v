`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:40:33 06/17/2018 
// Design Name: 
// Module Name:    counter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module counter(clk,reset,count);
input clk;
input reset;
output reg[14:0]count;
always @(posedge clk )
begin
if(!reset) 
	  begin
	  count<=0;
	  end
else
count<=count+1;
end

endmodule
