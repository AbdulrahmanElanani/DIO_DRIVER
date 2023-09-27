/*
 * Ping_Pong.c
 *
 *  Created on: Sep 25, 2023
 *      Author: TOP_WORLD
 */
#include "Ping_Pong.h"
u8 APP_PP_u8PPInint(void) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	LOC_u8ReturnValue = HAL_LED_u8LedInint(LED0_PORT, LED0_PIN);
	LOC_u8ReturnValue = HAL_LED_u8LedInint(LED1_PORT, LED1_PIN);
	LOC_u8ReturnValue = HAL_LED_u8LedInint(LED2_PORT, LED2_PIN);
	LOC_u8ReturnValue = HAL_PUSH_BUTTON_u8ButtonInint(BUTTON0_PORT,
	BUTTON0_PIN);
	LOC_u8ReturnValue = HAL_PUSH_BUTTON_u8ButtonInint(BUTTON1_PORT,
	BUTTON1_PIN);
	LOC_u8ReturnValue = HAL_PUSH_BUTTON_u8ButtonInint(BUTTON2_PORT,
	BUTTON2_PIN);
	return LOC_u8ReturnValue;
}
u8 APP_PP_u8PPApp(void) {
	extern u8 GLOB_u8GitButton0Mode;
	extern u8 GLOB_u8GitButton2Mode;
	extern u8 GLOB_u8GitButton1Mode;

	u8 LOC_u8ReturnValue = E_NOT_OK;
	HAL_PUSH_BUTTON_u8ButtonMode(BUTTON0_PORT, BUTTON0_PIN);
	HAL_PUSH_BUTTON_u8ButtonMode(BUTTON1_PORT, BUTTON1_PIN);
	HAL_PUSH_BUTTON_u8ButtonMode(BUTTON2_PORT, BUTTON2_PIN);
	if (GLOB_u8GitButton0Mode) {
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, LED_ON);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_OFF);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED2_PORT, LED2_PIN, LED_OFF);
		_delay_ms(2000);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, LED_OFF);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_ON);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED2_PORT, LED2_PIN, LED_OFF);
		_delay_ms(2000);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, LED_OFF);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_OFF);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED2_PORT, LED2_PIN, LED_ON);
		_delay_ms(2000);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, LED_OFF);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_ON);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED2_PORT, LED2_PIN, LED_OFF);
		_delay_ms(2000);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, LED_ON);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_OFF);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED2_PORT, LED2_PIN, LED_OFF);
		_delay_ms(200);
	} else if (GLOB_u8GitButton1Mode == HIGH) {
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, LED_ON);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_ON);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED2_PORT, LED2_PIN, LED_ON);
	} else if (GLOB_u8GitButton2Mode == HIGH) {
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, LED_OFF);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_OFF);
		LOC_u8ReturnValue = HAL_LED_u8LedMode(LED2_PORT, LED2_PIN, LED_OFF);
	} else {
		//NOTHING
	}

	return LOC_u8ReturnValue;
}

