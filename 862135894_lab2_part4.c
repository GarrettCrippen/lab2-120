/*	Partner(s) Name & E-mail:none
 *	Lab Section: 22
 *	Assignment: Lab # 2 Exercise # 4
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
	DDRB = 0x00; PORTB = 0xFF; 
	DDRC = 0x00; PORTC = 0xFF; 
	DDRD = 0xFF; PORTD = 0x00; 
	
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
	unsigned char tmpC = 0x00;
	unsigned char tmpD = 0x00;
	
while(1) {
	
		tmpA = PINA;
		tmpB = PINB;
		tmpC = PINC;
		tmpD = 0x00;
		
	tmpD =	((tmpA+tmpB+tmpC) > 141) ? 0x01 : 0x00;
	tmpD =	(tmpA > tmpC) ? tmpD | ((tmpA-tmpC) > 80)<<1 : tmpD | ((tmpC -tmpA) > 80)<<1;
		
		tmpD = (((tmpA+tmpB+tmpC)>>2) & 0xFC) |tmpD;

PORTD = tmpD;	

	}
	return 0;
}

