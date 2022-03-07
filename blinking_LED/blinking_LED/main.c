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
	DDRB = 0x20;
	PORTB = 0x00;
	
    while (1) 
    {
		PORTB |= (1<<5);
		_delay_us(3000000);
		PORTB &= 0b11011111;
		_delay_us(3000000);
		
    }
}

