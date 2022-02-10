/*
 * blinking_LED.c
 *
 * Created: 2/9/2022 11:22:01 PM
 * Author : Menazaa
 */ 

#include "config.h"
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRD = 0xff;
	DDRB = 0x03;
	PORTD = 0x00;
	PORTB = 0x03;
	
    while (1) 
    {
		PORTD = ~(PINB & 0x03)&0b00000011;
		
    }
}

