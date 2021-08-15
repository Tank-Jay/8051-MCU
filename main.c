#include <REG51F.H>

void delay(unsigned int time);

void main(void)
{	
	while(1)
	{
		P0 = 0xff;
		delay(1000);
		P0 = 0x00;
		delay(1000);		
	}
}

void delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0; i<time; i++)
		for(j=0; j<120; j++);
}









/*
for(P0=0x01; P0<0x80; P0=P0<<1)
			delay(300);
		for(P0=0x80; P0>0x01; P0=P0>>1)
			delay(300);
*/