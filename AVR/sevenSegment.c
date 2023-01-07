//#include<avr/io.h>
//#include<util/delay.h>
//#include<avr/interrupt.h>
//
//unsigned char drawNumber(unsigned char num)
//{
//	switch(num)
//	{
//	case 0:
//		return 0b00111111;
//		break;
//	case 1:
//		return 0b00000110;
//		break;
//	case 2:
//		return 0b01011011;
//		break;
//	case 3:
//		return 0b01001111;
//		break;
//	case 4:
//		return 0b01100110;
//		break;
//	case 5:
//		return 0b01101101;
//		break;
//	case 6:
//		return 0b01111101;
//		break;
//	case 7:
//		return 0b00000111;
//		break;
//	case 8:
//		return 0b01111111;
//		break;
//	case 9:
//		return 0b01100111;
//		break;
//	default:
//		break;
//	}
//}
//
//ISR(INT1_vect){
//	for(int i=0;i<5;i++){
//		PORTC|=0x07;
//		_delay_ms(500);
//		PORTC&=0xf8;
//	}
//
//}
//void INI1_Init(void){
//	DDRD&=~(1<<3);
//	MCUCR|=(1>>ISC11);
//	MCUCR&=~(1<<ISC10);
//	GICR|=(1<<7);
//	SREG|=(1<<7);
//
//}
//int main(void)
//{
//
//	//intitialization code
//	DDRC|=0x07;
//	DDRD&=~(1<<3);
//	PORTC&=0xf8;
//	//	DDRD  &= ~(1<<2) & ~(1<<3);
//	//		DDRD&=0xf9;
//	//	DDRA |= 0xfe;
//	//	DDRC |= 1<<6;
//	//	PORTA = drawNumber(0)<<1/*(PORTA&1)|((drawNumber(0)&(0x7f))<<1)*/;
//	//	PORTC |= 1<<6;
//	//	unsigned char flag1 = 0;
//	//	unsigned char flag2 = 0;
//	//	unsigned char num = 0;
//	INI1_Init();
//	while(1)
//	{
//		PORTC&=0xf8;
//		PORTC|=0x01;
//		_delay_ms(500);
//		PORTC&=0xf8;
//		PORTC|=0x02;
//		_delay_ms(500);
//		PORTC&=0xf8;
//		PORTC|=0x04;
//		_delay_ms(500);
//
//		//		if(!(PIND&(1<<2)))
//		//		{
//		//			_delay_ms(30);
//		//			if(!(PIND&(1<<2)))
//		//			{
//		//				if(!flag1){
//		//					flag1 = 1;
//		//					if(num!=9)
//		//						num++;
//		//					PORTA = drawNumber(num)<<1;
//		//				}
//		//			}
//		//		}
//		//		else {
//		//			flag1 = 0;
//		//		}
//		//		if(!(PIND&(1<<3)))
//		//		{
//		//			_delay_ms(30);
//		//			if(!(PIND&(1<<3)))
//		//			{
//		//				if(!flag2){
//		//					flag2=1;
//		//					if(num!=0)
//		//						num--;
//		//					PORTA = drawNumber(num)<<1;
//		//				}
//		//			}
//		//		}
//		//		else{
//		//			flag2 = 0;
//		//		}
//	}
//}
//
//
