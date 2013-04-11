/*
 * delay.c
 *
 *  Created on: 2013. 3. 11.
 *      Author: OSSI
 */

#include "delay.h"

// for DCO 1MHz
void delay_ms(uint16_t ms)
{
	volatile uint16_t i;
	for (i = 0 ; i < ms ; i++)
	{
		__delay_cycles(1000);
	}
}

// for DCO 1MHz
void delay_sec(uint16_t sec)
{
	volatile uint16_t i;
	for (i = 0 ; i < sec ; i++)
	{
		delay_ms(1000);
	}

}
