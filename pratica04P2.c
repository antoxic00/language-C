/*

*/

#include <p18f4520.h>
#pragma config OSC = HS
#pragma config WDT = OFF
#include <delays.h>

//Delay10KTCYx(250);

#define LED PORTCbits.RC0
#define BOT PORTCbits.RC1
#define BOT2 PORTCbits.RC2

void main(void)
{
	TRISCbits.RC0 = 0;
	TRISCbits.RC1 = 1;
	TRISCbits.RC2 = 1;
	LED = 0; 

	while(1)
	{
		if(BOT == 1 || BOT2 == 1)
		{
			LED = 1;
			Delay10KTCYx(500);
			LED = 0;
			Delay10KTCYx(500);
		}
	
}
	
}

