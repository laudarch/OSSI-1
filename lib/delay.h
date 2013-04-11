/*
 * delay.h
 *
 *  Created on: 2013. 3. 11.
 *      Author: OSSI
 */

#ifndef DELAY_H_
#define DELAY_H_

#include "ossi_types.h"
#define DCO_1MHZ	(0)
#define DCO_8MHZ	(1)

void delay_ms(uint16_t ms);
void delay_sec(uint16_t sec);


#endif /* DELAY_H_ */
