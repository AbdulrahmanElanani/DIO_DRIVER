/*
 * _7Segment.c
 *
 *  Created on: Sep 25, 2023
 *      Author: TOP_WORLD
 */

#include "_7Segment.h"
u8 HAL_7SEGMENT_u87SegmentInint(u8 LOC_u87SegmentPortID) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u87SegmentPortID <= PortD) {
		LOC_u8ReturnValue = MCAL_DIO_u8SetPortDirection(LOC_u87SegmentPortID,
		PORT_OUTPUT);
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}
u8 HAL_7SEGMENT_u87SegmentEnable(u8 LOC_u87SegmentPortID,
		u8 LOC_u87SegmentPinID, u8 LOC_u87SegmentMode, u8 LOC_u8Display_Num) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u87SegmentPortID <= PortD && LOC_u87SegmentPinID <= PIN7
			&& LOC_u87SegmentMode <= _7SEGMENT_ENABLE
			&& LOC_u8Display_Num <= _7SEGMENT_DISPLAY_NUM9) {
		LOC_u8ReturnValue = MCAL_DIO_u8SetPinValue(LOC_u87SegmentPortID,
				LOC_u87SegmentPinID, LOC_u87SegmentMode);
		PORTA = (LOC_u8Display_Num << _7SEGMENT_SHIFT_BIT);
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;

}
u8 HAL_7SEGMENT_u87SegmentDot(u8 LOC_u87SegmentPortID, u8 LOC_u87SegmentPinID,
		u8 LOC_u87SegmentMode) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u87SegmentPortID <= PortD && LOC_u87SegmentPinID <= PIN7
			&& LOC_u87SegmentMode <= _7SEGMENT_DOT_HIGH) {
		LOC_u8ReturnValue = MCAL_DIO_u8SetPinValue(LOC_u87SegmentPortID,
				LOC_u87SegmentPinID, LOC_u87SegmentMode);
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;

}
