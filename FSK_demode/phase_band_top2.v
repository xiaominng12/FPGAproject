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
input clk_ip;                   //ip核时钟，40倍clk
input rst_n;
input signed [20:0] Ic;
input signed [20:0] Qc;
reg signed [20:0] freq_part; //频率输出 
output reg signed [15:0] freq_part1;

//寄存器定义
reg signed [20:0] dis_out;         //鉴相器输出
reg signed [20:0] nco_phase_buf;   //锁定的相位值
reg signed [20:0] freq_control;    //频率控制
reg signed [20:0] phase_part;      //锁相环相位
reg signed [20:0] I_pll1;          //鉴相器I路输入
reg signed [20:0] Q_pll1;          //鉴相器Q路输入
reg signed [20:0] cos1;
reg signed [20:0] sine1;
reg signed [20:0] I_Q_pll3;
reg signed [20:0] sign_I_Q;        //(sign(I_PLL(i))*Q_PLL(i)-sign(Q_PLL(i))*I_PLL(i))结果
reg flag = 0;                      //计数器到达标志位                                  
reg [5:0] cnt;                     //计数器
reg [5:0] cnt1;
reg signed [20:0] phase_buf;       //存储判断之后的相位
reg signed [20:0] dividend_in;     //除法器被除数
reg signed [2:0]fil_cnt;

//wire型变量定义
wire signed [16:0] phaseout_in;    //cordicIP核相位输入
wire signed [15:0] sine;           //cordicIP核正弦输出
wire signed [15:0] cos;            //cordicIP核余弦输出
wire rdy;                          //cordicIP核输出标志位  
wire rfd;
wire signed [20:0] dis_out1;       //商输出 
wire signed [14:0] dis_out2;       //小数输出
wire signed [20:0] dis_out3;       //整数与小数合并,得到最后鉴相器输出
wire rdy1;
wire signed [41:0] I_Q_pll1;       //平方值
wire [20:0] I_Q_pll2;              //开方后输出结果
wire signed [20:0] divisor_in;     //被除数
wire signed [20:0] I_pll;          //鉴相器I路输入
wire signed [20:0] Q_pll;          //鉴相器Q路输入

//常量定义
parameter pi  = 51470;             //π
parameter sqrt2 = 23170;           //sqrt(2)
parameter C1 = 8213;               //二阶环路滤波器参数
parameter C2 = 225; 

//移位函数
function signed [20:0] mov;
   input signed [41:0] a;
   mov = (a>0)?(a>>14):-((-a+16383)>>14);
endfunction

always @(nco_phase_buf)          //输入相位判断，将相位锁定在-pi~pi之间
begin 
   if(nco_phase_buf >= -566170 && nco_phase_buf < -566170) phase_buf = nco_phase_buf + 617640;     //-13π ~ -11πnco_phase_buf+12π
   else if(nco_phase_buf >= -566170 && nco_phase_buf < -463230) phase_buf = nco_phase_buf + 514700; //-11π ~ -9π nco_phase_buf+10π
   else if(nco_phase_buf >= -463230 && nco_phase_buf <- 360290) phase_buf = nco_phase_buf + 411760;   //-9π ~ -7π nco_phase_buf+8π
   else if(nco_phase_buf >= -360290 && nco_phase_buf < -257350) phase_buf = nco_phase_buf+ 308820;    //-7π ~ -5π nco_phase_buf+6π
   else if(nco_phase_buf >= -257350 && nco_phase_buf < -154410) phase_buf = nco_phase_buf+ 205880;    //-5π ~ -3π nco_phase_buf+4π
   else if(nco_phase_buf >= -154410 && nco_phase_buf < -pi) phase_buf = nco_phase_buf + 102940;     //-3π ~ -π nco_phase_buf+2π
   else if(nco_phase_buf >= -51470 && nco_phase_buf <= 51470) phase_buf = nco_phase_buf;              //-π ~ π
   else if(nco_phase_buf > 51470 && nco_phase_buf < 154410) phase_buf = nco_phase_buf- 102940;         //π ~ 3π nco_phase_buf-2π
   else if(nco_phase_buf >= 154410 && nco_phase_buf < 257350) phase_buf = nco_phase_buf - 205880;     //3π ~ 5π nco_phase_buf-4π
   else if(nco_phase_buf >= 257350 && nco_phase_buf < 360290) phase_buf = nco_phase_buf - 308820;     //5π ~ 7π nco_phase_buf-6π
   else if(nco_phase_buf >= 360290 && nco_phase_buf < 463230) phase_buf = nco_phase_buf - 411760;     //7π ~ 9π nco_phase_buf-8π
   else if(nco_phase_buf >= 463230 && nco_phase_buf < 566170) phase_buf = nco_phase_buf - 514700;   //9π ~ 11π nco_phase_buf-10π
   else if(nco_phase_buf >= 566170 && nco_phase_buf <= 669110) phase_buf = nco_phase_buf - 617640; //11π ~ 13π nco_phase_buf-12π
	else phase_buf = 0;
end

assign phaseout_in = {phase_buf[20],phase_buf[15:0]};  //相位输入，3位整数位，14位小数位

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

assign I_pll = mov(Ic*cos) + mov(Qc*sine);  //计算鉴相器I路输入
assign Q_pll = mov(Qc*cos) - mov(Ic*sine);  //计算鉴相器Q路输入

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

assign I_Q_pll1 = I_pll*I_pll + Q_pll*Q_pll;   //进行平方运算 
assign divisor_in = mov(I_Q_pll2*sqrt2);    //除法器除数输入

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

assign dis_out3 = dis_out2[14]?{dis_out1-1'b1,dis_out2[13:0]}:{dis_out1,dis_out2[13:0]};  //将小数位与整数位合并，得到最后结果

always @(posedge clk_ip or negedge rst_n)   //环路滤波器设计
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

cordic cordic(                        //例化元件，调用cordicIP核进行三角函数运算
              .clk(clk_ip),
				  .phase_in(phaseout_in),
				  .x_out(cos),
				  .y_out(sine),
				  .rdy(rdy)
);

mycordic mycordic(                    //例化元件，调用cordicIP核进行开方运算，求出幅度
                  .clk(clk_ip),
						.x_in(I_Q_pll1),
						.x_out(I_Q_pll2),
						.rdy(rdy1)
); 

divider divider(                      //例化元件，调用除法器IP核进行除法运算，得到鉴相器输出
                .clk(clk_ip),
					 .dividend(sign_I_Q),
					 .divisor(divisor_in),
					 .quotient(dis_out1),
					 .fractional(dis_out2),
					 .rfd(rfd)
);  

endmodule
