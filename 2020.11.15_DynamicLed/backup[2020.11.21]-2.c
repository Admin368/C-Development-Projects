#include <STC15F2K60S2.H>
#include <intrins.h>
#define uchar unsigned char
#define uint unsigned int
sbit pos = P0^0;
sbit neg = P2^0;
uint lightOn=0;uint bright;
uint seconds;uint last_seconds;
uint flag = 1;uint flag_inverse=~1; 
char count = 0;uchar bx=0;
void Delay1ms(){
unsigned char i, j;_nop_();_nop_();_nop_();
i = 11;j = 190;do{while (--j);} while (--i);}
void delay(uint ms){uint x;for(x=0;x<ms;x++){Delay1ms();}}
void onLed(){
pos =1;
}
void offLed(){
pos = 0;
}
void blink(){onLed();delay(10);offLed();}
void brightness(uchar value){//0=off 100=full bright
uchar b;if(value<0){value=0;}if(value>100){value=100;}
for(b=0;b<100;b++){if(b<=value){onLed();}
else if(b>value){offLed();}}}
////////////////////INTERUPT/////////////////////////////////////////
void timer_reload(){TH0=(65536-46082)/256;TL0=(65536-46082)%256;}////
void init_timer(){TMOD=0x01;timer_reload();TR0=1;}///////////////////
void init_interupt(){EA=1;ET0=1;}////////////////////////////////////
////////////////////INTERUPT/////////////////////////////////////////
void timer_0_ISR() interrupt 1{timer_reload();count++;if(count==20){
flag=~flag;last_seconds=seconds;seconds++;count=0;}}//IF 1 SECOND///
void disableOthers(){
	P0 = 0;P1 = 0;
}
int main(){
init_timer();init_interupt();
disableOthers();
neg = 0;
while(1){
	if(flag==flag_inverse){onLed();lightOn=1;}
	if(flag!=flag_inverse){offLed();lightOn=0;}
	if(lightOn==1){brightness(count*10);}
	if(lightOn==0){brightness((20-count)*10);}	
	}
}
