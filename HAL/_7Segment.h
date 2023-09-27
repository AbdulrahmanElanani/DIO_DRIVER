/*
 * _7Segment.h
 *
 *  Created on: Sep 25, 2023
 *      Author: TOP_WORLD
 */

#ifndef HAL__7SEGMENT_H_
#define HAL__7SEGMENT_H_
#include "../MCAL/DIO.h"
u8 HAL_7SEGMENT_u87SegmentInint(u8 LOC_u87SegmentPortID);
u8 HAL_7SEGMENT_u87SegmentEnable(u8 LOC_u87SegmentPortID,
		u8 LOC_u87SegmentPinID, u8 LOC_u87SegmentMode, u8 LOC_u8Display_Num);
u8 HAL_7SEGMENT_u87SegmentDot(u8 LOC_u87SegmentPortID, u8 LOC_u87SegmentPinID,
		u8 LOC_u87SegmentMode);
#endif /* HAL__7SEGMENT_H_ */
