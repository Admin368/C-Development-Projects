#include <STC15F2K60S2.H>
#include <intrins.h>
#define uchar unsigned char
#define uint unsigned int
sbit pos = P0^0;
sbit neg = P2^0;
uchar led;
uchar count =0;
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
	P0 = 0;
	P1 = 0;
	neg = 0;
	led = 0x01;
	while(1){
		
		P0 = led;
		delay();
		P0 = 1;
		delay();
		led = led<<1;
		count++;
		
	}
}