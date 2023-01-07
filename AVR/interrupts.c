//#include<avr/io.h>
//#include<util/delay.h>
//#include<avr/interrupt.h>
//
//unsigned char tick=0,counter=0,cnt=0;
//ISR(TIMER0_COMP_vect){
//	tick++;
//	if(tick==25){
//		if(counter!=9)
//			counter++;
//		else
//			counter=0;
//		tick=0;
//	PORTC &=0xf0;
//	PORTC &=
//	}
//}
//// 250*0.064=31.5
//
//void Timer0_Init(void){
//	TCNT0=0;
//	OCR0=250;
//	TIMSK |=(1<<OCIE0);
//	TCCR0 = (1<<FOC0) | (1<<WGM01) | (1<<CS02) | (1<<CS00);
//}
//
//
//int main(){
//	SREG |=(1<<7);
//	//	DDRC |=(1<<0);
//	DDRC|=0x0f;
//	PORTC &=0xf0;
//	Timer0_Init();
//	while(1){
//	}
//}
