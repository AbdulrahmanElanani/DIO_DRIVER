/*
 * DIO.h
 *
 *  Created on: Sep 24, 2023
 *      Author: TOP_WORLD
 */

#ifndef MCAL_DIO_H_
#define MCAL_DIO_H_
#include "../Common_Header_File/STD_Types.h"
#include "../Common_Header_File/macros.h"
#include "../Common_Header_File/MCU.h"
u8 MCAL_DIO_u8SetPortDirection(u8 LOC_u8PortID, u8 LOC_u8PortDirection);
u8 MCAL_DIO_u8SetPortValue(u8 LOC_u8PortID, u8 LOC_u8PortValue);
u8 MCAL_DIO_u8SetPinValue(u8 LOC_u8PortID, u8 LOC_u8PinID, u8 LOC_u8PinValue);
u8 MCAL_DIO_u8SetPinDirection(u8 LOC_u8PortID, u8 LOC_u8PinID,
		u8 LOC_u8PinDirection);
u8 MCAL_DIO_u8GetPortValue(u8 LOC_u8PortID, u8 *LOC_pu8PortValue);
u8 MCAL_DIO_u8GetPinValue(u8 LOC_u8PortID, u8 LOC_u8PinID, u8 *LOC_pu8PinValue);
u8 MCAL_DIO_u8TogglePinValue(u8 LOC_u8PortID, u8 LOC_u8PinID);
u8 MCAL_DIO_u8TogglePortValue(u8 LOC_u8PortID);
#endif /* MCAL_DIO_H_ */
