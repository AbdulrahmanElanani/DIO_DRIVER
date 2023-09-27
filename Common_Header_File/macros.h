/*
 * macros.h
 *
 *  Created on: Sep 23, 2023
 *      Author: TOP_WORLD
 */

#ifndef MACROS_H_
#define MACROS_H_
#define SET_BIT(REG,BIT) REG|=(1<<BIT)
#define GET_BIT(REG,BIT) ((REG>>BIT) & 1)
#define CLR_BIT(REG,BIT) REG&=~(1<<BIT)
#define TOGGLE_BIT(REG,BIT) REG^=(1<<BIT)
#define HIGH 1
#define LOW 0
#define E_NOT_OK 0
#define E_OK 1
#define PIN_HIGH 1
#define PIN_LOW 0
#define PORT_HIGH 255
#define PORT_LOW 0
#define PortA 0
#define PortB 1
#define PortC 2
#define PortD 3
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#define PORT_OUTPUT 0xff
#define PORT_INPUT 0x00
#define PIN_OUTPUT 0x1
#define PIN_INPUT 0x0
#define LED_ON 1
#define LED_OFF 0
#define LED_Toggle 2
#define BUZZER_ON 1
#define BUZZER_OFF 0
#define LED0_PORT PortC
#define LED0_PIN  PIN2
#define LED1_PORT PortC
#define LED1_PIN  PIN7
#define LED2_PORT PortD
#define LED2_PIN  PIN3
#define BUTTON0_PORT PortB
#define BUTTON0_PIN  PIN0
#define BUTTON1_PORT PortD
#define BUTTON1_PIN  PIN6
#define BUTTON2_PORT PortD
#define BUTTON2_PIN  PIN2
#define BUZZER_PORT PortA
#define BUZZER_PIN  PIN3
#define _7SEGMENT_A_PORT PortA
#define _7SEGMENT_A_PIN PIN4
#define _7SEGMENT_B_PORT PortA
#define _7SEGMENT_B_PIN PIN5
#define _7SEGMENT_C_PORT PortA
#define _7SEGMENT_C_PIN PIN6
#define _7SEGMENT_D_PORT PortA
#define _7SEGMENT_D_PIN PIN7
#define _7SEGMENT_ENABLE1_PORT PortB
#define _7SEGMENT_ENABLE1_PIN PIN1
#define _7SEGMENT_ENABLE2_PORT PortB
#define _7SEGMENT_ENABLE2_PIN PIN2
#define _7SEGMENT_DOT_PORT PortB
#define _7SEGMENT_DOT_PIN PIN3
#define _7SEGMENT_ENABLE 1
#define _7SEGMENT_DISABLE 0
#define _7SEGMENT_DOT_HIGH 1
#define _7SEGMENT_DOT_LOW 0
#define _7SEGMENT_SHIFT_BIT 4
#define _7SEGMENT_DISPLAY_NUM0 0
#define _7SEGMENT_DISPLAY_NUM1 1
#define _7SEGMENT_DISPLAY_NUM2 2
#define _7SEGMENT_DISPLAY_NUM3 3
#define _7SEGMENT_DISPLAY_NUM4 4
#define _7SEGMENT_DISPLAY_NUM5 5
#define _7SEGMENT_DISPLAY_NUM6 6
#define _7SEGMENT_DISPLAY_NUM7 7
#define _7SEGMENT_DISPLAY_NUM8 8
#define _7SEGMENT_DISPLAY_NUM9 9
#define COUNTER 0
#define MAX_COUNTER 10
#define MIN_COUNTER 100
#define DELAY_LOOP 80

#endif /* MACROS_H_ */
