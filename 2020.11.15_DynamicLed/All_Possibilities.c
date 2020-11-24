#include <STC15F2K60S2.H>
#include <intrins.h>
#define uchar unsigned char
#define uint unsigned int
void delay()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 5;
	j = 52;
	k = 195;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

int main(){
	while(1){
		P0=0;P1=0;P2=0;//1
		delay();
		P0=0;P1=0;P2=1;//2
		delay();
		P0=0;P1=1;P2=0;//3
		delay();
		P0=0;P1=1;P2=1;//4
		delay();
		P0=1;P1=0;P2=0;//5
		delay();
		P0=1;P1=0;P2=1;//6
		delay();
		P0=1;P1=1;P2=0;//7
		delay();
		P0=1;P1=1;P2=1;//8
		delay();
	}
}