/*
 * LED.c
 *
 *  Created on: Sep 24, 2023
 *      Author: TOP_WORLD
 */
#include "LED.h"
u8 HAL_LED_u8LedInint(u8 LOC_u8LedPortID, u8 LOC_u8LedPinID) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8LedPortID <= PortD && LOC_u8LedPinID <= PIN7) {
		LOC_u8ReturnValue = MCAL_DIO_u8SetPinDirection(LOC_u8LedPortID,
				LOC_u8LedPinID, PIN_OUTPUT);
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}

u8 HAL_LED_u8LedMode(u8 LOC_u8LedPortID, u8 LOC_u8LedPinID, u8 LOC_u8LedMode) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8LedPortID <= PortD && LOC_u8LedPinID <= PIN7
			&& LOC_u8LedMode <= LED_Toggle) {
		if (LOC_u8LedMode == LED_ON) {
			MCAL_DIO_u8SetPinDirection(LOC_u8LedPortID, LOC_u8LedPinID,
			PIN_OUTPUT);
			MCAL_DIO_u8SetPinValue(LOC_u8LedPortID, LOC_u8LedPinID, PIN_HIGH);
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8LedMode == LED_OFF) {
			MCAL_DIO_u8SetPinDirection(LOC_u8LedPortID, LOC_u8LedPinID,
			PIN_INPUT);
			MCAL_DIO_u8SetPinValue(LOC_u8LedPortID, LOC_u8LedPinID, PIN_LOW);
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8LedMode == LED_Toggle) {
			MCAL_DIO_u8TogglePinValue(LOC_u8LedPortID, LOC_u8LedPinID);
			LOC_u8ReturnValue = E_OK;
		} else {
			//NOTHING
		}
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;

}
