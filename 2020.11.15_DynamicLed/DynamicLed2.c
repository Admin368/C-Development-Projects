#include <STC15F2K60S2.H>
#include <intrins.h>
#define uchar unsigned char
#define uint unsigned int
//button_1 - P3.5
//button_2 - P3.4
sbit button1 = P3^5;
sbit button2 = P3^4;
sbit buzzer = P3^7;
void buzzerOn(){
	buzzer = 0;
}
void buzzerOff(){
	buzzer = 0;
}
void init(){
	P1=1;
	P2=1;
	P3=1;
	P4=1;
}
void blueOn(){
	P1 = 0;
	P2 = 0;
}
void blueOff(){
	P1 = 1;
	P2 = 1;
}
int main(){
	P1=0;
	P2=0;
	P3=0;
	P4=0;
	buzzer = 1;
	//init();
	//button1=1;
	//button2=1;
	//buzzerOff();
	//while(1){
				/*if(button1==0){
					while(button1==0){
						buzzerOn();
					}
				}
				if(button2==0){
					while(button2==0{
						buzzerOn();
					}
				}
				buzzerOff();
		*/
		//buzzerOn();
	//}
}