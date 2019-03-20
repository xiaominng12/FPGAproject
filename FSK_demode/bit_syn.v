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

input clk;  //ϵͳʱ�ӣ�200MHz
input reset;//ϵͳ��λ����λ������·���������
output signed[7:0]data_out;//�������4FSK����
output signed [7:0]led; //�������루�����ã�


wire clk_128;  //�����Դ���ʱ������ʱ�ӷ�Ƶ�õ�
wire clk_4;
wire clk_ip;
wire signed[15:0]y; //wire�м����
wire signed[15:0]z;
wire signed[15:0]syn_in;
wire signed[15:0]freq_part;
wire signed[20:0]douta;//I·�������ݣ�ʵ��ʹ��ʱ�뽫I·�������뵽phase_band_topģ��IC�ӿ�
wire signed[20:0]doutb;//Q·�������ݣ�ʵ��ʹ��ʱ�뽫Q·�������뵽phase_band_topģ��QC�ӿ�
wire signed[15:0]iData;
wire [14:0]count;

input key; //�����������ã�
input key1; //�����������ã�
output  rxd; //��������������ã�
wire signed[20:0]IC_fil;
wire signed[20:0]QC_fil;

counter counter(.clk(clk_128),.reset(reset),.count(count)); //������˳�����ROM�ڵ�I��Q���ݣ������ã�
ROM ROM(.clka(clk_128),.addra(count),.douta(douta)); //I·���ݣ������ã�
ROM2 ROM2(.clka(clk_128),.addra(count),.douta(doutb)); //Q·���ݣ������ã�
filter_low filter_low_IC(.clk(clk_128),.reset(reset),.x(douta),.y(IC_fil));
filter_low filter_low_QC(.clk(clk_128),.reset(reset),.x(doutb),.y(QC_fil));
phase_band_top phase_band_top(.clk(clk_128),.clk_ip(clk_ip),.rst_n(reset),.Ic(IC_fil),.Qc(QC_fil),.freq_part1(freq_part));//���
filter filter(.clk(clk_128),.reset(reset),.x(freq_part),.y(y));//�˲�
downsample downsample(.clk(clk_128),.reset(reset),.x(y),.y(syn_in));//�²���
Gardner_1 Gardner_1(.clk(clk_4),.key(key),.reset(reset),.x(syn_in),.iData(iData),.data_out(data_out),.led(led));//λͬ��
clk_div clk_div(.clk(clk),.clk_128(clk_128),.clk_4(clk_4),.clk_ip(clk_ip));//ʱ�ӷ�Ƶ�������ã�
uart_tx uart_tx(.clk(clk),.rst_n(reset),.key(key1),.tx_data(led),.txd(rxd));//���ڵ��ԣ������ã�
endmodule

