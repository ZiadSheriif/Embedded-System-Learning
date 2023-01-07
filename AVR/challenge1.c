//#include <avr/io.h>
//#include<util/delay.h>
//
//
//int main(void){
//	//	DDRC|=0b000000111; // con-gif first 3 pins to output pin
//	//	PORTC&=0xF8; // set first 3 bits of port c to 0
//	//	while(1){
//	//		PORTC=(PORTC & 0xf8) | 0x01; // 0000 0001
//	//		_delay_ms(500);
//	//		PORTC=(PORTC & 0xf8) | 0x02; // 0000 0010
//	//		_delay_ms(500);
//	//		PORTC=(PORTC & 0xf8) | 0x04; // 0000 0100
//	//		_delay_ms(500);
//	//	}
//	DDRD &=~(1<<4); //INPUT  BUTTON PIN
//	DDRC |=0x0f; //OUTPUT PIN LED // 1111 0000
//	PORTC |=0x00;
////	char flag='0';
////	short cnt=0;
//	DDRD&=0xf9;
//	while(1){
//		//		if(PINB & (1<<0) && flag=='0')
//		//		{
//		//			PORTC |=(1<<0);
//		//			flag ='1';
//		//		}
//		//		if(flag=='1'){
//		//			if(PINB & (1<<0)){
//		//				PORTC &=~(1<<0);
//		//				flag='0';
//		//			}
//		//		}
//		//	}
//		//		if(!(PINB &(1<<0))){
//		//			if(flag=='0'){
//		//				PORTC ^=(1<<0);
//		//				flag='1';
//		//			}
//		//		}
//		//		else
//		//			flag='0';
//		//		if(!(PIND & (1<<3)))
//		//			PORTC |=(1<<5);
//		//		else
//		//			PORTC &=~(1<<5);
//
//		if(PIND&(1<<4)){
//			if(flag=='0'){
//				cnt%=10;  // 42%5=2 43%10=3 ,,, 34%8=2 ,, 20%4=
//				PORTC=cnt++;
//				flag='1';
//			}
//		}
//		else
//			flag='0';
//	}
//}
