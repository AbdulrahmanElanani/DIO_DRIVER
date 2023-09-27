/*
 * LED.h
 *
 *  Created on: Sep 24, 2023
 *      Author: TOP_WORLD
 */

#ifndef HAL_LED_H_
#define HAL_LED_H_
#include "../MCAL/DIO.h"
u8 HAL_LED_u8LedInint(u8 LOC_u8LedPortID, u8 LOC_u8LedPinID);
u8 HAL_LED_u8LedMode(u8 LOC_u8LedPortID, u8 LOC_u8LedPinID, u8 LOC_u8LedMode);
#endif /* HAL_LED_H_ */
