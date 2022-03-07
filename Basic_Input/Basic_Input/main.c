/*
 * Basic_Input.c
 *
 * Created: 3/7/2022 7:19:07 PM
 * Author : Menazaa
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL


int main()

{ 
	DDRB = 0;
	DDRB= DDRB | (1<<5);	

	while(1)

	PORTB = (PINB & (1<<4)) << 1 ;

	return 0;

}

