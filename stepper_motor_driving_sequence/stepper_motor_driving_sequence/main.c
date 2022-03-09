/*
 * stepper_motor_driving_sequence.c
 *
 * Created: 3/7/2022 8:36:26 PM
 * Author : Menazaa
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(){ 

int ch[4]= {0x01,0x02,0x04,0x08};
int i=0;
DDRB=0x0f;

while(1){ 
	PORTB =ch[i]; 

	i++; 
	i= i%4;

	_delay_ms(1000); 
}

return 0;

}

