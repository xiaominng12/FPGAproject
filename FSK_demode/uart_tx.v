`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:35:27 07/26/2018 
// Design Name: 
// Module Name:    uart_tx 
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
module uart_tx(
	input      clk,       //ʱ������
	input      rst_n,     //��λ����
	input      key,       //һ�����������ڷ��Ϳ���
	input [7:0] tx_data,  //��������
	output reg txd        //���ڷ��͹ܽ�
);
/*
	����key���͹̶�����ʮ������12��
	����û��ȥ����
*/
//״̬��״̬����
parameter S_IDLE  = 4'd0; //����״̬
parameter S_START = 4'd1; //����1BIT��ʼ��0
parameter S_BIT0  = 4'd2; //���͵�һλ����
parameter S_BIT1  = 4'd3;
parameter S_BIT2  = 4'd4;
parameter S_BIT3  = 4'd5;
parameter S_BIT4  = 4'd6;
parameter S_BIT5  = 4'd7;
parameter S_BIT6  = 4'd8;
parameter S_BIT7  = 4'd9;
parameter S_STOP  = 4'd10;//����ֹͣλ 1 

reg[3:0] state;
reg[15:0] bit_timer; //���ڿ��Ʋ����ʵļ����������������9600��ÿ������λ50000000/9600��ʱ������
//wire[7:0] tx_data;   //���͵Ĺ̶�����12
wire clk_div2;

//assign tx_data = 8'h12;
always@(posedge clk or negedge rst_n)
begin
	if(!rst_n)
	begin
		state <= S_IDLE;
		bit_timer <= 16'd0;
		txd <= 1'b1;
	end
	else
	begin
		case(state)
			S_IDLE:
			begin
				txd <= 1'b1;
				bit_timer <= 16'd0;
				if(!key) //�������ڰ���״̬
					state <= S_START;
				else
					state <= state;
			end
			
			S_START:
			begin
				txd <= 1'b0;//��ʼλ��0
				if(bit_timer == 16'd20833)//һ��BIT��ʱ�䵽�ˣ�״̬ת��
				begin
					state <= S_BIT0;
					bit_timer <= 16'd0;
				end
				else
				begin
					state <= state;
					bit_timer <= bit_timer + 16'd1;
				end
			end
			
			S_BIT0:
			begin
				txd <= tx_data[0];//��һλ����
				if(bit_timer == 16'd20833)
				begin
					state <= S_BIT1;
					bit_timer <= 16'd0;
				end
				else
				begin
					state <= state;
					bit_timer <= bit_timer + 16'd1;
				end
			end
		

			S_BIT1:
			begin
				txd <= tx_data[1];
				if(bit_timer == 16'd20833)
				begin
					state <= S_BIT2;
					bit_timer <= 16'd0;
				end
				else
				begin
					state <= state;
					bit_timer <= bit_timer + 16'd1;
				end
			end
	
			S_BIT2:
			begin
				txd <= tx_data[2];
				if(bit_timer == 16'd20833)
				begin
					state <= S_BIT3;
					bit_timer <= 16'd0;
				end
				else
				begin
					state <= state;
					bit_timer <= bit_timer + 16'd1;
				end
			end
		
			S_BIT3:
			begin
				txd <= tx_data[3];
				if(bit_timer == 16'd20833)
				begin
					state <= S_BIT4;
					bit_timer <= 16'd0;
				end
				else
				begin
					state <= state;
					bit_timer <= bit_timer + 16'd1;
				end
			end
		
			S_BIT4:
			begin
				txd <= tx_data[4];
				if(bit_timer == 16'd20833)
				begin
					state <= S_BIT5;
					bit_timer <= 16'd0;
				end
				else
				begin
					state <= state;
					bit_timer <= bit_timer + 16'd1;
				end
			end
		
			S_BIT5:
			begin
				txd <= tx_data[5];
				if(bit_timer == 16'd20833)
				begin
					state <= S_BIT6;
					bit_timer <= 16'd0;
				end
				else
				begin
					state <= state;
					bit_timer <= bit_timer + 16'd1;
				end
			end
		
			S_BIT6:
			begin
				txd <= tx_data[6];
				if(bit_timer == 16'd20833)
				begin
					state <= S_BIT7;
					bit_timer <= 16'd0;
				end
				else
				begin
					state <= state;
					bit_timer <= bit_timer + 16'd1;
				end
			end
		
			S_BIT7:
			begin
				txd <= tx_data[7];//���һλ����
				if(bit_timer == 16'd20833)
				begin
					state <= S_STOP;
					bit_timer <= 16'd0;
				end
				else
				begin
					state <= state;
					bit_timer <= bit_timer + 16'd1;
				end
			end
	
			S_STOP:
			begin
				txd <= 1'b1;//ֹͣλ
				if(bit_timer == 16'd20833)
				begin
					state <= S_IDLE;
					bit_timer <= 16'd0;
				end
				else
				begin
					state <= state;
					bit_timer <= bit_timer + 16'd1;
				end
			end
			default:
			begin
				state <= S_IDLE;
			end
		endcase
	end
end



endmodule 