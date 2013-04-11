/*
 * util.c
 *
 *  Created on: 2012. 12. 19.
 *      Author: OSSI
 */

#include "util.h"



void min_max(uint8_t min, uint8_t max, uint8_t value)
{
	if (value <= min)
	{
		value = min;
	}
	if (value > max)
	{
		value = max;
	}
}
