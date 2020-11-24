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

void flowing(){
		P0 = led;
		delay();
		P0 = 1;
		delay();
		led = led<<1;
		count++;	
	while(1){
			P0 = led;
			delay();
			P0 = 1;
			delay();
			led = led<<1;
			count++;
	}
}