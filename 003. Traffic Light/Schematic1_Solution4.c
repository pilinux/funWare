/*
 * trafficLight.c
 *
 * Created: 02/12/2017 12:40:22 PM
 * Author : mahir
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD = 0xff;	// Set all Port D pins as outputs
    uint8_t i;
	
	while(1)
	{

    for (i=2; i<5; i++)
		{
			PORTD = _BV(i);
			_delay_ms(1000);
		}
		
	}
    
    return 0;
}
