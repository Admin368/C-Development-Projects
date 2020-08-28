#include <reg52.h>
#include <paulobetaX5.h>
#define uchar unsigned char
sbit VCC = P3^0;
sbit Ground = P3^7;

void CheckConnection(){
	if(Ground==0){xled(1);}
	if(Ground==1){xled(2);}

	if(VCC==1){xled(7);}
	if(VCC==0){xled(8);}

}
void main(){
	//P3 = 0; // P0 as ground
	Ground= 0;
	VCC = 1;
	while(1){
		uchar ValueOfGround;
		uchar ValueOfVCC;
		uchar g1,g2;
		uchar v1,v2;
		CheckConnection();
		ValueOfGround = Ground;
		g1 = ValueOfGround/10;
		g2 = ValueOfGround%10;
		xsegment(1);
		xdisplay(g1);
		xsegment(2);
		xdisplay(g2);

		ValueOfVCC = VCC;
		v1 = ValueOfVCC/10;
		v2 = ValueOfVCC%10;
		xsegment(5);
		xdisplay(v1);
		xsegment(6);
		xdisplay(v2);
	}
}