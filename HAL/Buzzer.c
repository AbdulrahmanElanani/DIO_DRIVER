/*
 * Buzzer.c
 *
 *  Created on: Sep 25, 2023
 *      Author: TOP_WORLD
 */
#include "Buzzer.h"

u8 HAL_BUZZER_u8BuzzerInint(u8 LOC_u8BuzzerPortID, u8 LOC_u8BuzzerPinID) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8BuzzerPortID <= PortD && LOC_u8BuzzerPinID <= PIN7) {
		LOC_u8ReturnValue = MCAL_DIO_u8SetPinDirection(LOC_u8BuzzerPortID,
				LOC_u8BuzzerPinID, PIN_OUTPUT);
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}

u8 HAL_BUZZER_u8BuzzerMode(u8 LOC_u8BuzzerPortID, u8 LOC_u8BuzzerPinID,
		u8 LOC_u8BuzzerMode) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8BuzzerPortID <= PortD && LOC_u8BuzzerPinID <= PIN7
			&& LOC_u8BuzzerMode <= BUZZER_ON) {
		if (LOC_u8BuzzerMode == BUZZER_ON) {
			MCAL_DIO_u8SetPinDirection(LOC_u8BuzzerPortID, LOC_u8BuzzerPinID,
			PIN_OUTPUT);
			MCAL_DIO_u8SetPinValue(LOC_u8BuzzerPortID, LOC_u8BuzzerPinID,
					PIN_HIGH);
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8BuzzerMode == BUZZER_OFF) {
			MCAL_DIO_u8SetPinDirection(LOC_u8BuzzerPortID, LOC_u8BuzzerPinID,
			PIN_INPUT);
			MCAL_DIO_u8SetPinValue(LOC_u8BuzzerPortID, LOC_u8BuzzerPinID,
					PIN_LOW);
			LOC_u8ReturnValue = E_OK;
		} else {
			//NOTHING
		}
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;

}

