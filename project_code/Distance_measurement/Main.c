/*
 ================================================================================================
 Name        : Distance_measurement.c
 Author      : Narden Sobhy Shaker
 Description : Measure the distance using ultrasonic sensor HC-SR04.
 Date        : 14/10/2022
 ================================================================================================
*/

#include "lcd.h"
#include <avr/io.h>
#include "icu.h"
#include "ultrasonic_sensor.h"


int main(){
	uint16 distance=0;
	SREG  |= (1<<7);
	LCD_init();
	LCD_displayString("Distance=    cm");
	/* Enable Global Interrupt I-Bit */
    Ultrasonic_init();

	while(1){
		distance=Ultrasonic_readDistance();
		LCD_moveCursor(0,10);
		LCD_intgerToString(distance);
	}
}
