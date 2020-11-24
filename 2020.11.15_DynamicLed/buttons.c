#include <STC15F2K60S2.H>
#include <intrins.h>
#define uchar unsigned char
#define uint unsigned int
//button_1 - P3.5
//button_2 - P3.4
sbit button1 = P3^5;
sbit button2 = P3^4;
void blueOn(){
	P1 = 0;
	P2 = 0;
}
void blueOff(){
	P1 = 1;
	P2 = 1;
}
int main{
	blueOff();
	while(1){
			while(button1==0){
				blueOn();
			}
			while(button2==0){
			blueOff();
			}
	}
}