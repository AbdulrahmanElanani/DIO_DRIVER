/*
 * Push_Botton.c
 *
 *  Created on: Sep 25, 2023
 *      Author: TOP_WORLD
 */
#include "Push_Botton.h"
u8 GLOB_u8GitButton0Mode = LOW;
u8 GLOB_u8GitButton1Mode = LOW;
u8 GLOB_u8GitButton2Mode = LOW;
u8 HAL_PUSH_BUTTON_u8ButtonInint(u8 LOC_u8ButtonPortID, u8 LOC_u8ButtonPinID) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8ButtonPortID <= PortD && LOC_u8ButtonPinID <= PIN7) {
		LOC_u8ReturnValue = MCAL_DIO_u8SetPinDirection(LOC_u8ButtonPortID,
				LOC_u8ButtonPinID, PIN_OUTPUT);
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}

u8 HAL_PUSH_BUTTON_u8ButtonMode(u8 LOC_u8ButtonPortID, u8 LOC_u8ButtonPinID) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8ButtonPortID <= PortD && LOC_u8ButtonPinID <= PIN7) {
		if (LOC_u8ButtonPinID == PIN0) {
			LOC_u8ReturnValue = MCAL_DIO_u8GetPinValue(LOC_u8ButtonPortID,
					LOC_u8ButtonPinID, &GLOB_u8GitButton0Mode);
		} else if (LOC_u8ButtonPinID == PIN6) {
			LOC_u8ReturnValue = MCAL_DIO_u8GetPinValue(LOC_u8ButtonPortID,
					LOC_u8ButtonPinID, &GLOB_u8GitButton1Mode);
		} else if (LOC_u8ButtonPinID == PIN2) {
			LOC_u8ReturnValue = MCAL_DIO_u8GetPinValue(LOC_u8ButtonPortID,
					LOC_u8ButtonPinID, &GLOB_u8GitButton2Mode);

		}
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;

}

