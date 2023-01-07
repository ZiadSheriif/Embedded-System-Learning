#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>



int main(){
	//	DDRA &= 0xF8; // 1111 1000
	//	DDRC |= 0x03;
	//	PORTC &= 0xFC;
	//	while(1){
	//		if(PINA &(1<<0)){
	//			PORTC &=~(1<<0);
	//			PORTC |=(1<<1);
	//		}
	//		else if(PINA &(1<<1)){
	//			PORTC |=(1<<0);
	//			PORTC &=~(1<<1);
	//		}
	//		else if(PINA &(1<<2)){
	//			PORTC &=~(1<<0);
	//			PORTC &=~(1<<1);
	//		}
	//
	//	}
	unsigned char stepper[8]={8,12,4,6,2,3,1,9};
	unsigned char counter =0;
	DDRC|=0x0f;
	DDRC&=0xf0;
	while(1){
		PORTC =(stepper[counter]&0x0f) | (0xf0 & PORTC);
		counter ++;
		if(counter==8)
			counter=0;
		_delay_ms(500)

	}

}
