/*
 * _7Segment_Minute_APP.c
 *
 *  Created on: Sep 27, 2023
 *      Author: TOP_WORLD
 */
#include "_7Segment_Minute_APP.h"
	u8 counter_1,counter_2,counter_Loop;
u8 APP_7SMINUTE_u87SMinuteInint(void) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentInint(_7SEGMENT_A_PORT);
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentInint(_7SEGMENT_ENABLE2_PORT);
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentInint(_7SEGMENT_ENABLE1_PORT);
	return LOC_u8ReturnValue;
}

u8 APP_7SMINUTE_u87SMinuteApp(void) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	APP_7SCOUNT_u87SCountInint();
	while(counter_Loop!=MIN_COUNTER){
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(_7SEGMENT_ENABLE1_PORT,
	_7SEGMENT_ENABLE1_PIN, _7SEGMENT_ENABLE, counter_1);
	_delay_ms(2);
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(_7SEGMENT_ENABLE1_PORT,
	_7SEGMENT_ENABLE1_PIN, _7SEGMENT_DISABLE, counter_1);
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(_7SEGMENT_ENABLE2_PORT,
	_7SEGMENT_ENABLE2_PIN, _7SEGMENT_ENABLE, counter_2);
	_delay_ms(2);
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(_7SEGMENT_ENABLE2_PORT,
	_7SEGMENT_ENABLE2_PIN, _7SEGMENT_DISABLE, counter_2);
	counter_Loop++;
	}
	counter_1++;
	if (counter_1 == MAX_COUNTER && counter_2 < _7SEGMENT_DISPLAY_NUM5) {
		counter_1 = COUNTER;
		counter_2++;
	} else if (counter_2 == _7SEGMENT_DISPLAY_NUM5 && counter_1 == MAX_COUNTER) {
		counter_2 = LOW;
		counter_1 =LOW;

	} else {
		//NOTHING
	}
		counter_Loop=LOW;
	return LOC_u8ReturnValue;
}
