/*	Author: Garrett Crippen
 *  Partner(s) Name: None
 *	Lab Section: 22
 *	Assignment: Lab #2  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include <../header/simAVRHeader.h>
#endif

int main(void) {
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0xFF; PORTB = 0x00;

    unsigned char tmpB = 0x00; 
    unsigned char tmpA1 = 0x00;
   unsigned char tmpA2 = 0x00; 
while(1) {
	tmpA1 = PINA & 0x01;
	tmpA2 = PINA & 0x02;

	if (tmpA1 == 0x01 && tmpA2 == 0x00) {
		tmpB = (tmpB & 0xFC) | 0x01;

	} else {
		tmpB = (tmpB & 0xFC) | 0x00;

		}
PORTB = tmpB;
    }
    return 0;
}

