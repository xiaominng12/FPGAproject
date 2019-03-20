`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:41:05 06/17/2018 
// Design Name: 
// Module Name:    filter 
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
module filter(clk,reset,x,y,t1,t2,t3,t4);
input clk;
inout reset;
input signed [15:0]x;
output reg signed [15:0]y;
output reg signed [15:0]t1,t2,t3,t4;
reg [5:0]cnt;
reg flag=0;						
reg signed [15:0] d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,
                  d13,d14,d15,d16,d17,d18,d19,d20,d21,d22,d23,
						d24,d25,d26,d27,d28,d29,d30,d31,d32,d33;
parameter signed [15:0] a1=51,a2=-10,a3=-80,a4=-149,a5=-204,a6=-231,a7=-221,a8=-164,a9=-58,a10=92,a11=277,a12=482,
                        a13=689,a14=878,a15=1029,a16=1126,a17=1160,a18=1126,a19=1029,a20=878,a21=689,a22=482,a23=277,
	                     a24=92,a25=-58,a26=-164,a27=-221,a28=-231,a29=-204,a30=-149,a31=-80,a32=-10,a33=51;
//ÒÆÎ»º¯Êý					
function signed[15:0]mov;
input signed[31:0]a;
mov=a>=0?(a>>10):-((-a+1023)>>10);
endfunction

always @(posedge clk)
if(!reset)
   begin
	   d1<=0;d2<=0;d3<=0;d4<=0;d5<=0;d6<=0;d7<=0;d8<=0;d9<=0;d10<=0;d11<=0;d12<=0;
      d13<=0;d14<=0;d15<=0;d16<=0;d17<=0;d18<=0;d19<=0;d20<=0;d21<=0;d22<=0;d23<=0;
		d24<=0;d25<=0;d26<=0;d27<=0;d28<=0;d29<=0;d30<=0;d31<=0;d32<=0;d33<=0;
		cnt<=0;
	end
else
   begin
	    cnt<=cnt+1;
		 if(cnt>1)
		 begin
		 d1<=d2;d2<=d3;d3<=d4;d4<=d5;d5<=d6;d6<=d7;d7<=d8;d8<=d9;d9<=d10;d10<=d11;d11<=d12;d12<=d13;d13<=d14;d14<=d15;d15<=d16;d16<=d17;   
		 d17<=d18;d18<=d19;d19<=d20;d20<=d21;d21<=d22;d22<=d23;d23<=d24;d24<=d25;d25<=d26;d26<=d27;d27<=d28;d28<=d29;d29<=d30;d30<=d31;
		 d31<=d32;d32<=d33;d33<=x;
       y<=mov(a1*d33+a2*d32+a3*d31+a4*d30+a5*d29+a6*d28+a7*d27+a8*d26+a9*d25+a10*d24+a11*d23+a12*d22
		 +a13*d21+a14*d20+a15*d19+a16*d18+a17*d17+a18*d16+a19*d15+a20*d14+a21*d13+a22*d12+a23*d11
		 +a24*d10+a25*d9+a26*d8+a27*d7+a28*d6+a29*d5+a30*d4+a31*d3+a32*d2+a33*d1);
		 cnt<=2;
		 end
		 //t1<=cnt; 
		// t2<=a13*d21;
		 
		 //t3<=a13;
		 
		 //t4=d21;
	end
endmodule
