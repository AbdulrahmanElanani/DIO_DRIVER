/*
 * _7Segment_Push_Count.c
 *
 *  Created on: Sep 27, 2023
 *      Author: TOP_WORLD
 */

#include "_7Segment_Push_Count.h"
u8 counter_1 = COUNTER, counter_2 = COUNTER,counter_Loop;
u8 APP_7SPC_u87SPCInint(void) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentInint(_7SEGMENT_A_PORT);
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentInint(_7SEGMENT_ENABLE2_PORT);
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentInint(_7SEGMENT_ENABLE1_PORT);
	LOC_u8ReturnValue = HAL_PUSH_BUTTON_u8ButtonInint(BUTTON0_PORT,
	BUTTON0_PIN);
	LOC_u8ReturnValue = HAL_PUSH_BUTTON_u8ButtonInint(BUTTON1_PORT,
	BUTTON1_PIN);
	LOC_u8ReturnValue = HAL_PUSH_BUTTON_u8ButtonInint(BUTTON2_PORT,
	BUTTON2_PIN);
	return LOC_u8ReturnValue;
}
u8 APP_7SPC_u87SPCApp(void) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	extern u8 GLOB_u8GitButton0Mode;
	extern u8 GLOB_u8GitButton2Mode;
	extern u8 GLOB_u8GitButton1Mode;
	HAL_PUSH_BUTTON_u8ButtonMode(BUTTON0_PORT, BUTTON0_PIN);
	HAL_PUSH_BUTTON_u8ButtonMode(BUTTON1_PORT, BUTTON1_PIN);
	HAL_PUSH_BUTTON_u8ButtonMode(BUTTON2_PORT, BUTTON2_PIN);
	APP_7SPC_u87SPCInint();


	if (counter_1 == MAX_COUNTER && counter_2 < _7SEGMENT_DISPLAY_NUM9) {
		counter_1 = COUNTER;
		counter_2++;
	} else if (counter_2 == _7SEGMENT_DISPLAY_NUM9 && counter_1 == MAX_COUNTER) {
		counter_2 = _7SEGMENT_DISPLAY_NUM9;
		counter_1 = _7SEGMENT_DISPLAY_NUM9;

	} else {
		//NOTHING
	}


	if (counter_1 > MIN_COUNTER && counter_2 != _7SEGMENT_DISPLAY_NUM0) {
		counter_1 = _7SEGMENT_DISPLAY_NUM9;
		counter_2--;
	} else if (counter_2 == _7SEGMENT_DISPLAY_NUM0 && counter_1 > MIN_COUNTER) {
		counter_1 = _7SEGMENT_DISPLAY_NUM0;

	} else {
		//NOTHING
	}


	if (GLOB_u8GitButton2Mode) {
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
				_7SEGMENT_ENABLE1_PORT,
				_7SEGMENT_ENABLE1_PIN, _7SEGMENT_ENABLE, LOW);
		_delay_ms(10);
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
				_7SEGMENT_ENABLE1_PORT,
				_7SEGMENT_ENABLE1_PIN, _7SEGMENT_DISABLE, LOW);
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
				_7SEGMENT_ENABLE2_PORT,
				_7SEGMENT_ENABLE2_PIN, _7SEGMENT_ENABLE, LOW);
		_delay_ms(10);
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
				_7SEGMENT_ENABLE2_PORT,
				_7SEGMENT_ENABLE2_PIN, _7SEGMENT_DISABLE, LOW);
		counter_1 = LOW;
		counter_2 = LOW;

	} else {
		//NOTHING
	}




	if (GLOB_u8GitButton0Mode && counter_1 <= _7SEGMENT_DISPLAY_NUM9
			&& counter_2 <= _7SEGMENT_DISPLAY_NUM9) {
		while(counter_Loop!=DELAY_LOOP){
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
		_7SEGMENT_ENABLE1_PORT,
		_7SEGMENT_ENABLE1_PIN, _7SEGMENT_ENABLE, counter_1);
		_delay_ms(2);
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
		_7SEGMENT_ENABLE1_PORT,
		_7SEGMENT_ENABLE1_PIN, _7SEGMENT_DISABLE, counter_1);
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
		_7SEGMENT_ENABLE2_PORT,
		_7SEGMENT_ENABLE2_PIN, _7SEGMENT_ENABLE, counter_2);
		_delay_ms(2);
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
		_7SEGMENT_ENABLE2_PORT,
		_7SEGMENT_ENABLE2_PIN, _7SEGMENT_DISABLE, counter_2);
		counter_Loop++;
		}
		counter_1++;
		counter_Loop=LOW;
	} else {
		//NOTHING
	}






	if (GLOB_u8GitButton1Mode && counter_1 <= _7SEGMENT_DISPLAY_NUM9
			&& counter_2 <= _7SEGMENT_DISPLAY_NUM9) {
		while(counter_Loop!=DELAY_LOOP){
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
		_7SEGMENT_ENABLE1_PORT,
		_7SEGMENT_ENABLE1_PIN, _7SEGMENT_ENABLE, counter_1);
		_delay_ms(2);
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
		_7SEGMENT_ENABLE1_PORT,
		_7SEGMENT_ENABLE1_PIN, _7SEGMENT_DISABLE, counter_1);
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
		_7SEGMENT_ENABLE2_PORT,
		_7SEGMENT_ENABLE2_PIN, _7SEGMENT_ENABLE, counter_2);
		_delay_ms(2);
		LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(
		_7SEGMENT_ENABLE2_PORT,
		_7SEGMENT_ENABLE2_PIN, _7SEGMENT_DISABLE, counter_2);
		counter_Loop++;
		}
		counter_Loop=LOW;
		counter_1--;
	} else {
		//NOTHING
	}



	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(_7SEGMENT_ENABLE1_PORT,
	_7SEGMENT_ENABLE1_PIN, _7SEGMENT_ENABLE, counter_1);
	_delay_ms(10);
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(_7SEGMENT_ENABLE1_PORT,
	_7SEGMENT_ENABLE1_PIN, _7SEGMENT_DISABLE, counter_1);
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(_7SEGMENT_ENABLE2_PORT,
	_7SEGMENT_ENABLE2_PIN, _7SEGMENT_ENABLE, counter_2);
	_delay_ms(10);
	LOC_u8ReturnValue = HAL_7SEGMENT_u87SegmentEnable(_7SEGMENT_ENABLE2_PORT,
	_7SEGMENT_ENABLE2_PIN, _7SEGMENT_DISABLE, counter_2);

	return LOC_u8ReturnValue;
}
