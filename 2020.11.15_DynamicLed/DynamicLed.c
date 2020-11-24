#include <reg52.h>
sbit pos = P0^0;//X_R0
sbit neg = P2^0;//Z_A3
sbit beep = P3^7; //Beep
sbit beepVcc= P1^1;
int main(){
	while(1){
		neg = 0;
		pos = 1;
	}
}
/*
		pos = 1;
		neg =0
		P0=0;
		P1=1;
		beep=0;
*/