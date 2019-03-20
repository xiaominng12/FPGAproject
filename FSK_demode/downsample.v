`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:41:39 06/17/2018 
// Design Name: 
// Module Name:    downsample 
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
module downsample(clk,reset,x,y);
input clk;
input reset;
input signed[15:0]x;
output reg signed[15:0]y;
reg [5:0]cnt;
parameter sample_num1=4;
parameter sample_num2=31;
reg start_flag=0;
always @(posedge clk) begin
  if(!reset) 
	  begin
	     cnt<=0;
	  end
  else
     begin
	     if(start_flag==0)
		    begin
			    cnt<=cnt+1;
				 if(cnt==sample_num1)
		          begin
			       cnt<=0;
				    y<=(x*8);
					 start_flag<=1;
			       end
		    end
			else
			  begin
			     cnt<=cnt+1;
		        if(cnt==sample_num2)
		          begin
			       cnt<=0;
				    y<=(x*8);
			       end
			  end
	     
     end
end


endmodule
