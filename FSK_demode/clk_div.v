`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:26:41 07/18/2018 
// Design Name: 
// Module Name:    clk_div 
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
module clk_div(
               clk,
					clk_128,
					clk_4,
					clk_ip
);
input clk;              //ϵͳʱ��200MHz
output wire clk_128;    //ϵͳ����ʱ�ӣ�614400Hz 
output wire clk_4;      //1/32����ʱ��
output wire clk_ip;     //IP��ʱ�ӣ�45������ʱ��

reg [7:0] cnt1;    //������1
reg [12:0] cnt2;   //������2
reg [2:0] cnt3;    //������3
reg clk_128_1;
reg clk_4_1;
reg clk_ip_1;

initial            //��ʼ������
begin
   cnt1 <= 8'd0;
	cnt2 <= 13'd0;
	cnt3 <= 3'd0;
	clk_128_1 = 0;
	clk_4_1 = 0;
	clk_ip_1 = 0;
end

always @(posedge clk)  //��Ƶ����1���õ�����ʱ��
begin
   if(cnt1 == 8'd179)
	begin
		clk_128_1 <= ~clk_128_1;
		cnt1 <= 8'd0;
	end 
	else
	   cnt1 <= cnt1 + 8'd1;
end  

always @(posedge clk)  //��Ƶ����2,�õ�1/32����ʱ��
begin
  if(cnt2 == 13'd5759)
  begin
	  clk_4_1 <= ~clk_4_1;
	  cnt2<= 13'd0;
  end   
  else
	  cnt2 <= cnt2 + 13'd1;
end 

always @(posedge clk)  //��Ƶ����3���õ�IP��ʱ��
begin
	if(cnt3 == 3'd3)
	begin
	   clk_ip_1 <= ~clk_ip_1;
	   cnt3 <= 3'd0; 
	end
	else
	  cnt3 <= cnt3 + 3'd1;
end

assign clk_128 = clk_128_1;
assign clk_4 = clk_4_1;
assign clk_ip = clk_ip_1;

endmodule
