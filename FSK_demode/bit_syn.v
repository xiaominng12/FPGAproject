`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:39:31 06/17/2018 
// Design Name: 
// Module Name:    bit_syn 
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
module bit_syn(clk,reset,key,key1,data_out,led,rxd);

input clk;  //系统时钟，200MHz
input reset;//系统复位，复位后可重新发送新数据
output signed[7:0]data_out;//最终输出4FSK数据
output signed [7:0]led; //串口输入（测试用）


wire clk_128;  //本测试代码时钟由主时钟分频得到
wire clk_4;
wire clk_ip;
wire signed[15:0]y; //wire中间变量
wire signed[15:0]z;
wire signed[15:0]syn_in;
wire signed[15:0]freq_part;
wire signed[20:0]douta;//I路测试数据，实际使用时请将I路数据输入到phase_band_top模块IC接口
wire signed[20:0]doutb;//Q路测试数据，实际使用时请将Q路数据输入到phase_band_top模块QC接口
wire signed[15:0]iData;
wire [14:0]count;

input key; //按键（测试用）
input key1; //按键（测试用）
output  rxd; //串口输出（测试用）
wire signed[20:0]IC_fil;
wire signed[20:0]QC_fil;

counter counter(.clk(clk_128),.reset(reset),.count(count)); //计数以顺序输出ROM内的I、Q数据（测试用）
ROM ROM(.clka(clk_128),.addra(count),.douta(douta)); //I路数据（测试用）
ROM2 ROM2(.clka(clk_128),.addra(count),.douta(doutb)); //Q路数据（测试用）
filter_low filter_low_IC(.clk(clk_128),.reset(reset),.x(douta),.y(IC_fil));
filter_low filter_low_QC(.clk(clk_128),.reset(reset),.x(doutb),.y(QC_fil));
phase_band_top phase_band_top(.clk(clk_128),.clk_ip(clk_ip),.rst_n(reset),.Ic(IC_fil),.Qc(QC_fil),.freq_part1(freq_part));//解调
filter filter(.clk(clk_128),.reset(reset),.x(freq_part),.y(y));//滤波
downsample downsample(.clk(clk_128),.reset(reset),.x(y),.y(syn_in));//下采样
Gardner_1 Gardner_1(.clk(clk_4),.key(key),.reset(reset),.x(syn_in),.iData(iData),.data_out(data_out),.led(led));//位同步
clk_div clk_div(.clk(clk),.clk_128(clk_128),.clk_4(clk_4),.clk_ip(clk_ip));//时钟分频（测试用）
uart_tx uart_tx(.clk(clk),.rst_n(reset),.key(key1),.tx_data(led),.txd(rxd));//串口调试（测试用）
endmodule

