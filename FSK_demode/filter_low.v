`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:35:40 07/18/2018 
// Design Name: 
// Module Name:    filter_low 
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
module filter_low(clk,reset,x,y);
input clk;
inout reset;
input signed [20:0]x;
output reg signed [20:0]y;
//output reg signed [15:0]t1,t2,t3,t4;
reg [5:0]cnt;					
reg signed [20:0] d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,
                  d13,d14,d15,d16,d17,d18,d19,d20,d21,d22,d23,
						d24,d25,d26,d27,d28,d29,d30,d31,d32,d33;
parameter signed [15:0] a1=0,a2=2,a3=8,a4=22,a5=44,a6=76,a7=118,a8=168,a9=226,a10=289,a11=355,a12=424,
                        a13=492,a14=558,a15=620,a16=677,a17=727,a18=770,a19=804,a20=829,a21=845,a22=852,a23=849,
	                     a24=838,a25=818,a26=791,a27=756,a28=715,a29=670,a30=619,a31=566,a32=510,a33=453;
//ÒÆÎ»º¯Êý					
function signed[20:0]mov;
input signed[36:0]a;
mov=a>=0?(a>>14):-((-a+16383)>>14);
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
		 d1<=d2;d2<=d3;d3<=d4;d4<=d5;d5<=d6;d6<=d7;d7<=d8;d8<=d9;d9<=d10;d10<=d11;d11<=d12;d12<=d13;d13<=d14;d14<=d15;d15<=d16;d16<=d17;   
		 d17<=d18;d18<=d19;d19<=d20;d20<=d21;d21<=d22;d22<=d23;d23<=d24;d24<=d25;d25<=d26;d26<=d27;d27<=d28;d28<=d29;d29<=d30;d30<=d31;
		 d31<=d32;d32<=d33;d33<=x;
       y<=mov(a1*d33+a2*d32+a3*d31+a4*d30+a5*d29+a6*d28+a7*d27+a8*d26+a9*d25+a10*d24+a11*d23+a12*d22
		 +a13*d21+a14*d20+a15*d19+a16*d18+a17*d17+a18*d16+a19*d15+a20*d14+a21*d13+a22*d12+a23*d11
		 +a24*d10+a25*d9+a26*d8+a27*d7+a28*d6+a29*d5+a30*d4+a31*d3+a32*d2+a33*d1);
	end
endmodule

