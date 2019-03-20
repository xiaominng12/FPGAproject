`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:42:07 06/17/2018 
// Design Name: 
// Module Name:    Gardner_1 
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
module Gardner_1(clk,key,reset,x,iData,data_out,led);
input clk;
input key;
input reset;
input signed[15:0]x;

//²âÊÔ±äÁ¿
output reg signed [15:0]iData;
output reg signed [7:0]data_out;
output reg signed [7:0]led;
reg signed[7:0]led_1,led_2;
reg [3:0]led_cnt;
reg signed[15:0]iData_1;

parameter  signed dPlGain=64;// 1/16
parameter  signed tedGain=1024;// 1

reg start_flag=0,data_flag=0,pos_flag;
reg [2:0]cnt_data,cnt_start; 
reg [5:0]cnt_pos;
reg [15:0]pos;//signed??
reg [15:0]pos_pre;
reg signed [15:0]tedp,tedc,tedm;
reg signed [15:0]gted,terror;
reg signed [1:0]sign;
reg signed [15:0]d0,d1,d2,d_1;
reg flag;


function signed[15:0]mov;
input signed[31:0]a;
mov=a>=0?(a>>10):-((-a+1023)>>10);
endfunction

task gardn;
input [9:0]uk;
input signed[15:0]d0,d1,d2,d_1;
output reg signed[15:0]iData;

reg signed[15:0]c0,c1,c2,c_1;
reg signed[15:0]uk_2,uk_3;
reg signed[31:0]kk;

//reg signed[15:0]a,b,c,d;
parameter  signed a=170;//1/6
parameter  signed b=512;//1/2
parameter  signed c=341;//1/3
parameter  judge1=896;//112*8
parameter  judge2=904;//113*8
begin
   kk=uk*uk;     
   uk_2=kk>>10;   
	kk=uk_2*uk;
	uk_3=kk>>10;  
	c2=((a*uk_3)>>10)-((a*uk)>>10);  
	c1=mov(-(b*uk_3))+((b*uk_2)>>10)+uk;  
	c0=((b*uk_3)>>10)-uk_2-((b*uk)>>10)+1024;  
	c_1=mov(-(a*uk_3))+((b*uk_2)>>10)-((c*uk)>>10); 
   iData=mov(c2*d2)+mov(c1*d1)+mov(c0*d0)+mov(c_1*d_1);//   
	if(flag) 
	begin
	   if(iData>judge1) data_out=3;
		else if(iData>0) data_out=1;
		else if(iData>(-judge2)) data_out=-1;
		else data_out=-3;	
		$fdisplay(fid2,"%d",data_out);
		 led_cnt<=led_cnt+1;
	     if(led_cnt>11) led_cnt<=11;
		if(led_cnt==9) led_1=data_out;
	   if(led_cnt==10) led_2=data_out;
	end
end
endtask

integer zz,zz1,fid2;
always @(posedge clk or negedge reset) begin
   if(!reset) 
	  begin
	     start_flag<=0;
		  data_flag<=0;
		  cnt_pos<=1;////////
		  cnt_data<=1;
		  cnt_start<=1;
		  pos<=10240;//matlab=10240
		  pos_flag<=0;
		  tedm<=0;
		  tedp<=0;
		  led_cnt<=1;
		  flag<=1;
		  fid2=$fopen("yyyy.txt","w");
	  end
	else 
	  begin
	     if(!key) led<=led_2;
        if(key) led<=led_1;
	     if(data_flag==0) begin
	     cnt_data<=cnt_data+1;//final=101
		  end
		  case(cnt_data)
              3'b001:begin d_1<=x;cnt_pos<=cnt_pos+1;end
			  	  3'b010:begin d0<=x;cnt_pos<=cnt_pos+1;end
			     3'b011:begin d1<=x;cnt_pos<=cnt_pos+1;end
				  3'b100:begin d2<=x;cnt_pos<=cnt_pos+1;end
				  default:begin d_1<=d0;d0<=d1;d1<=d2;d2<=x;data_flag<=1;cnt_pos<=cnt_pos+1;end
		  endcase
	  
	     if(start_flag==0)
		  begin
	        cnt_start<=cnt_start+1;
           case(cnt_start)
             // 3'b011:tedm<=x;//data(3)  997 
			  	 // 3'b101:tedp<=x;//data(5)  995
			     3'b110:start_flag<=1;
				  default:begin tedm<=tedm;tedp<=tedp;end
			  endcase
		  end	

		 //  assign pos_pre=pos[9:0];
		  if(pos_flag==0)
		  begin
		     if(cnt_pos==pos[15:10]) 
		        begin
		        gardn(pos[9:0],d0,d1,d2,d_1,iData);
			    // tedc<=iData;
			    // sign<=((tedp-tedc)>0)?1:(((tedp-tedc)==0)?0:-1);
			    // gted<=mov((sign*tedm)*dPlGain);    t1=sign;t2=tedp;t3=tedc;
			    // terror<=mov(gted*tedGain);         t4=terror;//;   
				 // terror<=mov((mov(((((tedp-iData)>0)?1:(((tedp-iData)==0)?0:-1))*tedm)*dPlGain))*tedGain); 
				  cnt_pos<=1;
				  pos<=pos[9:0]+2048+(mov((mov(((((tedp>0)?1:((tedp==0)?0:-1))-((iData>0)?1:((iData==0)?0:-1)))*tedm)*dPlGain))*tedGain))*2;   
				  pos_flag<=1;  	
              flag<=~flag;				  
		        end
		  end
		  else
		  begin
		     if(cnt_pos==pos[15:10]) 
		        begin                  
		        gardn(pos[9:0],d0,d1,d2,d_1,iData_1); 
				  tedm<=iData_1;
				  tedp<=iData;
				  cnt_pos<=1;                   
				  pos<=2048+pos[9:0];   
				  pos_flag<=0;
				  flag<=~flag;
				  end
		  end
		  
     end
end
endmodule