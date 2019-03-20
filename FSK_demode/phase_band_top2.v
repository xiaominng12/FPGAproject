`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// Create Date:    12:46:15 05/31/2018 
// Design Name:     
// Module Name:    phase_band_top 
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
module phase_band_top(
                      clk,
							 clk_ip,
							 rst_n,
							 Ic,
							 Qc,
							 freq_part1
    );
input clk;
input clk_ip;                   //ip��ʱ�ӣ�40��clk
input rst_n;
input signed [20:0] Ic;
input signed [20:0] Qc;
reg signed [20:0] freq_part; //Ƶ����� 
output reg signed [15:0] freq_part1;

//�Ĵ�������
reg signed [20:0] dis_out;         //���������
reg signed [20:0] nco_phase_buf;   //��������λֵ
reg signed [20:0] freq_control;    //Ƶ�ʿ���
reg signed [20:0] phase_part;      //���໷��λ
reg signed [20:0] I_pll1;          //������I·����
reg signed [20:0] Q_pll1;          //������Q·����
reg signed [20:0] cos1;
reg signed [20:0] sine1;
reg signed [20:0] I_Q_pll3;
reg signed [20:0] sign_I_Q;        //(sign(I_PLL(i))*Q_PLL(i)-sign(Q_PLL(i))*I_PLL(i))���
reg flag = 0;                      //�����������־λ                                  
reg [5:0] cnt;                     //������
reg [5:0] cnt1;
reg signed [20:0] phase_buf;       //�洢�ж�֮�����λ
reg signed [20:0] dividend_in;     //������������
reg signed [2:0]fil_cnt;

//wire�ͱ�������
wire signed [16:0] phaseout_in;    //cordicIP����λ����
wire signed [15:0] sine;           //cordicIP���������
wire signed [15:0] cos;            //cordicIP���������
wire rdy;                          //cordicIP�������־λ  
wire rfd;
wire signed [20:0] dis_out1;       //����� 
wire signed [14:0] dis_out2;       //С�����
wire signed [20:0] dis_out3;       //������С���ϲ�,�õ������������
wire rdy1;
wire signed [41:0] I_Q_pll1;       //ƽ��ֵ
wire [20:0] I_Q_pll2;              //������������
wire signed [20:0] divisor_in;     //������
wire signed [20:0] I_pll;          //������I·����
wire signed [20:0] Q_pll;          //������Q·����

//��������
parameter pi  = 51470;             //��
parameter sqrt2 = 23170;           //sqrt(2)
parameter C1 = 8213;               //���׻�·�˲�������
parameter C2 = 225; 

//��λ����
function signed [20:0] mov;
   input signed [41:0] a;
   mov = (a>0)?(a>>14):-((-a+16383)>>14);
endfunction

always @(nco_phase_buf)          //������λ�жϣ�����λ������-pi~pi֮��
begin 
   if(nco_phase_buf >= -566170 && nco_phase_buf < -566170) phase_buf = nco_phase_buf + 617640;     //-13�� ~ -11��nco_phase_buf+12��
   else if(nco_phase_buf >= -566170 && nco_phase_buf < -463230) phase_buf = nco_phase_buf + 514700; //-11�� ~ -9�� nco_phase_buf+10��
   else if(nco_phase_buf >= -463230 && nco_phase_buf <- 360290) phase_buf = nco_phase_buf + 411760;   //-9�� ~ -7�� nco_phase_buf+8��
   else if(nco_phase_buf >= -360290 && nco_phase_buf < -257350) phase_buf = nco_phase_buf+ 308820;    //-7�� ~ -5�� nco_phase_buf+6��
   else if(nco_phase_buf >= -257350 && nco_phase_buf < -154410) phase_buf = nco_phase_buf+ 205880;    //-5�� ~ -3�� nco_phase_buf+4��
   else if(nco_phase_buf >= -154410 && nco_phase_buf < -pi) phase_buf = nco_phase_buf + 102940;     //-3�� ~ -�� nco_phase_buf+2��
   else if(nco_phase_buf >= -51470 && nco_phase_buf <= 51470) phase_buf = nco_phase_buf;              //-�� ~ ��
   else if(nco_phase_buf > 51470 && nco_phase_buf < 154410) phase_buf = nco_phase_buf- 102940;         //�� ~ 3�� nco_phase_buf-2��
   else if(nco_phase_buf >= 154410 && nco_phase_buf < 257350) phase_buf = nco_phase_buf - 205880;     //3�� ~ 5�� nco_phase_buf-4��
   else if(nco_phase_buf >= 257350 && nco_phase_buf < 360290) phase_buf = nco_phase_buf - 308820;     //5�� ~ 7�� nco_phase_buf-6��
   else if(nco_phase_buf >= 360290 && nco_phase_buf < 463230) phase_buf = nco_phase_buf - 411760;     //7�� ~ 9�� nco_phase_buf-8��
   else if(nco_phase_buf >= 463230 && nco_phase_buf < 566170) phase_buf = nco_phase_buf - 514700;   //9�� ~ 11�� nco_phase_buf-10��
   else if(nco_phase_buf >= 566170 && nco_phase_buf <= 669110) phase_buf = nco_phase_buf - 617640; //11�� ~ 13�� nco_phase_buf-12��
	else phase_buf = 0;
end

assign phaseout_in = {phase_buf[20],phase_buf[15:0]};  //��λ���룬3λ����λ��14λС��λ

always @(posedge clk or negedge rst_n)
begin
   if(!rst_n)
	begin
	   cos1 <= 21'd0;
		sine1 <= 21'd0;
		fil_cnt<=0;
	end
	else
	begin
	   fil_cnt<=fil_cnt+1;
		if(fil_cnt>1)
		begin
		fil_cnt<=2;
		cos1 <= cos;
	   sine1 <= sine;
		end
	end
end

assign I_pll = mov(Ic*cos) + mov(Qc*sine);  //���������I·����
assign Q_pll = mov(Qc*cos) - mov(Ic*sine);  //���������Q·����

always @(posedge clk or negedge rst_n)  
begin
   if(!rst_n)
	begin
	   I_pll1 <= 21'd0;
    	Q_pll1 <= 21'd0;
	end
	else
	begin 
	   if(fil_cnt>1)
		begin
		I_pll1 <= I_pll;
		Q_pll1 <= Q_pll; 	
		end
	end
end

assign I_Q_pll1 = I_pll*I_pll + Q_pll*Q_pll;   //����ƽ������ 
assign divisor_in = mov(I_Q_pll2*sqrt2);    //��������������

always @(posedge clk_ip or negedge rst_n)    //
begin
   if(!rst_n)
	begin
	   I_Q_pll3 <= 21'd0;
		sign_I_Q <= 21'd0;
	end
	else
	begin
	  if(fil_cnt>1)
		begin
	   I_Q_pll3 <= I_Q_pll2;
	   sign_I_Q <= {((I_pll>0)?1:((I_pll == 0)?0:-1))*Q_pll} - {((Q_pll>0)?1:((Q_pll == 0)?0:-1))*I_pll};
	   end
	end	   
end

assign dis_out3 = dis_out2[14]?{dis_out1-1'b1,dis_out2[13:0]}:{dis_out1,dis_out2[13:0]};  //��С��λ������λ�ϲ����õ������

always @(posedge clk_ip or negedge rst_n)   //��·�˲������
begin
   if(!rst_n)
	begin
	   cnt1 <= 6'd0;
		dis_out <= 21'd0;
	   phase_part <= 21'd0;
		freq_part <= 21'd0;
		freq_control <= 21'd0;
		nco_phase_buf <= 21'd0;
	end
	else
	begin
	  if(fil_cnt>1)
		begin
	   if(cnt1 < 43)
		   cnt1 <= cnt1 + 1;
		else
		begin
			dis_out <= dis_out3;
			phase_part <= mov(dis_out3*C1);
			freq_part <= mov(dis_out3*C2) + freq_part; 
		   nco_phase_buf <= nco_phase_buf + mov(dis_out3*C1) + freq_part;
			freq_control <= mov(dis_out3*C1) + freq_part;	
			cnt1 <= 0;
	   end
		end
	end
end

always @(posedge clk or negedge rst_n)
begin
   if(!rst_n)
	   freq_part1 <= 16'd0;
	else
	   if(fil_cnt>1)
		begin
	   freq_part1 <= {freq_part[20],freq_part[18:4]}+1;
		end
end 

cordic cordic(                        //����Ԫ��������cordicIP�˽������Ǻ�������
              .clk(clk_ip),
				  .phase_in(phaseout_in),
				  .x_out(cos),
				  .y_out(sine),
				  .rdy(rdy)
);

mycordic mycordic(                    //����Ԫ��������cordicIP�˽��п������㣬�������
                  .clk(clk_ip),
						.x_in(I_Q_pll1),
						.x_out(I_Q_pll2),
						.rdy(rdy1)
); 

divider divider(                      //����Ԫ�������ó�����IP�˽��г������㣬�õ����������
                .clk(clk_ip),
					 .dividend(sign_I_Q),
					 .divisor(divisor_in),
					 .quotient(dis_out1),
					 .fractional(dis_out2),
					 .rfd(rfd)
);  

endmodule
