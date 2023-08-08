/*
*/

#include <p18f4520.h>
#pragma config OSC = HS
#pragma config WDT = OFF


#define LED PORTCbits.RC0
#define BOT PORTCbits.RC1

void main(void)
{
	unsigned int cont = 0;
	TRISCbits.RC0 = 0;
	TRISCbits.RC1 = 1;
	LED = 0; 

	while(1)
	{
		if(BOT == 1)
		{
			cont++;
			if(cont == 10)
			{
				LED =1;
			}
		if(cont == 15)
		{
			LED = 0;
			cont = 0;
		}	
	
		while(BOT == 1);// travamento
	}
	
}
	
}