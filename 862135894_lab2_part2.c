/*	Partner(s) Name & E-mail:none
 *	Lab Section: 22
 *	Assignment: Lab # 2 Exercise # 2
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
	DDRC = 0xFF; PORTC = 0x00; 
	
	unsigned char tmpA = 0x00;
	unsigned char cntavail;
while(1) {
	
		cntavail = 0;
		for(unsigned char i = 0; i < 4; i++){
			tmpA = PINA & (1<<i);
			if(tmpA)cntavail++;
		}

PORTC = 4-cntavail;	
	}
	return 0;
}

