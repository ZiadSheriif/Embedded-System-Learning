/*
 ======================================================================================
 Name        : potentiometer.c
 Author      : Mohamed Tarek
 Description : Test the ADC driver designed with polling technique using potentiometer
 Date        : 18/6/2017
 ======================================================================================
 */
#include "ADC.h"
#include "lcd.h"

int main(void)
{
	uint16 res_value;
	LCD_init(); /* initialize LCD driver */
	ADC_init(); /* initialize ADC driver */

	/* Display this string "ADC Value = " only once on LCD at the first row */
	LCD_displayString("ADC Value = ");
    while(1)
    {
    	/* Read ADC channel 0 where the potentiometer is connected */
		res_value = ADC_readChannel(0);

		/* Display the ADC digital value every time at same position */
		LCD_moveCursor(0,12);
		if(res_value >= 1000)
		{
			LCD_intgerToString(res_value);
		}
		else
		{
			LCD_intgerToString(res_value);
			/* In case the digital value is three or two or one digits print space in the next digit place */
			LCD_displayCharacter(' ');
		}
    }
}


