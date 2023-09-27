/*
 * Buzzer.h
 *
 *  Created on: Sep 25, 2023
 *      Author: TOP_WORLD
 */

#ifndef HAL_BUZZER_H_
#define HAL_BUZZER_H_
#include "../MCAL/DIO.h"
u8 HAL_BUZZER_u8BuzzerInint(u8 LOC_u8BuzzerPortID, u8 LOC_u8BuzzerPinID);
u8 HAL_BUZZER_u8BuzzerMode(u8 LOC_u8BuzzerPortID, u8 LOC_u8BuzzerPinID,
		u8 LOC_u8BuzzerMode);

#endif /* HAL_BUZZER_H_ */
