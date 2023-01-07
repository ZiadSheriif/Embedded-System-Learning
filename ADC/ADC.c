#include "avr/io.h" /* To use the ADC Registers */
#include "adc.h"
#include "common_macros.h" /* To use the macros like SET_BIT */

void ADC_init(void){
	SET_BIT(ADMUX,REFS0);
	CLEAR_BIT(ADMUX,REFS1);
	ADMUX=0;
	ADCSRA=(1<<ADEN) |(1<<ADPS1)|(1<<ADPS0);
}
uint16 ADC_readChannel(uint8 ch_num){
	ADMUX&=0xE0;
	ADMUX|=ch_num;
	while(ADIF==0){};
	SET_BIT(ADCSRA,ADMUX);
	return ADC;
}
