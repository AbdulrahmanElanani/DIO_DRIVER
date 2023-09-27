/*
 * DIO.c
 *
 *  Created on: Sep 24, 2023
 *      Author: TOP_WORLD
 */
#include "DIO.h"

u8 MCAL_DIO_u8SetPortDirection(u8 LOC_u8PortID, u8 LOC_u8PortDirection) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if ((LOC_u8PortID <= PortD) && (LOC_u8PortDirection <= PORT_OUTPUT)) {
		if (LOC_u8PortDirection == PORT_OUTPUT) {
			if (LOC_u8PortID == PortA) {
				DDRA = PORT_OUTPUT;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortB) {
				DDRB = PORT_OUTPUT;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortC) {
				DDRC = PORT_OUTPUT;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortD) {
				DDRD = PORT_OUTPUT;
				LOC_u8ReturnValue = E_OK;
			} else {
				//NOTHING
			}

		} else if (LOC_u8PortDirection == PORT_INPUT) {
			if (LOC_u8PortID == PortA) {
				DDRA = PORT_INPUT;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortB) {
				DDRB = PORT_INPUT;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortC) {
				DDRC = PORT_INPUT;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortD) {
				DDRD = PORT_INPUT;
				LOC_u8ReturnValue = E_OK;
			} else {
				//NOTHING
			}
		} else {
			//NOTHING
		}

	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}

u8 MCAL_DIO_u8SetPortValue(u8 LOC_u8PortID, u8 LOC_u8PortValue) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8PortID <= PortD && LOC_u8PortValue <= PORT_HIGH) {
		if (LOC_u8PortValue == PORT_HIGH) {
			if (LOC_u8PortID == PortA) {
				PORTA = PORT_HIGH;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortB) {
				PORTB = PORT_HIGH;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortC) {
				PORTC = PORT_HIGH;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortD) {
				PORTD = PORT_HIGH;
				LOC_u8ReturnValue = E_OK;
			} else {
				//NOTHING
			}

		} else if (LOC_u8PortValue == PORT_LOW) {
			if (LOC_u8PortID == PortA) {
				PORTA = PORT_LOW;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortB) {
				PORTB = PORT_LOW;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortC) {
				PORTC = PORT_LOW;
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortD) {
				PORTC = PORT_LOW;
				LOC_u8ReturnValue = E_OK;
			} else {
				//NOTHING
			}
		} else {
			//NOTHING
		}
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}
u8 MCAL_DIO_u8TogglePortValue(u8 LOC_u8PortID) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8PortID <= PortD) {
		if (LOC_u8PortID == PortA) {
			PORTA = ~PORTA;
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortB) {
			PORTB = ~PORTB;
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortC) {
			PORTC = ~ PORTC;
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortD) {
			PORTD = ~ PORTD;
			LOC_u8ReturnValue = E_OK;
		} else {
			//NOTHING
		}

	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}
u8 MCAL_DIO_u8GetPortValue(u8 LOC_u8PortID, u8 *LOC_pu8PortValue) {
	u8 LOC_u8ReturnValue = E_NOT_OK;

	if (LOC_u8PortID <= PortD) {
		if (LOC_u8PortID == PortA) {
			*LOC_pu8PortValue = PORTA;
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortB) {
			*LOC_pu8PortValue = PORTB;
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortC) {
			*LOC_pu8PortValue = PORTC;
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortD) {
			*LOC_pu8PortValue = PORTD;
			LOC_u8ReturnValue = E_OK;
		} else {
			//NOTHING
		}

	}
	return LOC_u8ReturnValue;

}

u8 MCAL_DIO_u8SetPinDirection(u8 LOC_u8PortID, u8 LOC_u8PinID,
		u8 LOC_u8PinDirection) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if ((LOC_u8PortID <= PortD) && LOC_u8PinID <= PIN7
			&& (LOC_u8PinDirection <= PIN_OUTPUT)) {
		if (LOC_u8PinDirection == PIN_OUTPUT) {
			if (LOC_u8PortID == PortA) {
				SET_BIT(DDRA, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortB) {
				SET_BIT(DDRB, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortC) {
				SET_BIT(DDRC, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortD) {
				SET_BIT(DDRD, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			}

			else {
				//NOTHING
			}

		} else if (LOC_u8PinDirection == PIN_INPUT) {
			if (LOC_u8PortID == PortA) {
				CLR_BIT(DDRA, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortB) {
				CLR_BIT(DDRB, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortC) {
				CLR_BIT(DDRC, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortD) {
				CLR_BIT(DDRD, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			}

			else {
				//NOTHING
			}
		} else {
			//NOTHING
		}

	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}

u8 MCAL_DIO_u8SetPinValue(u8 LOC_u8PortID, u8 LOC_u8PinID, u8 LOC_u8PinValue) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8PortID <= PortD && LOC_u8PinID <= PIN7
			&& LOC_u8PinValue <= PIN_HIGH) {
		if (LOC_u8PinValue == PIN_HIGH) {
			if (LOC_u8PortID == PortA) {
				SET_BIT(PORTA, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortB) {
				SET_BIT(PORTB, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortC) {
				SET_BIT(PORTC, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortD) {
				SET_BIT(PORTD, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else {
				//NOTHING
			}

		} else if (LOC_u8PinValue == PIN_LOW) {
			if (LOC_u8PortID == PortA) {
				CLR_BIT(PORTA, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortB) {
				CLR_BIT(PORTB, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortC) {
				CLR_BIT(PORTC, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else if (LOC_u8PortID == PortD) {
				CLR_BIT(PORTD, LOC_u8PinID);
				LOC_u8ReturnValue = E_OK;
			} else {
				//NOTHING
			}
		} else {
			//NOTHING
		}
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}
u8 MCAL_DIO_u8GetPinValue(u8 LOC_u8PortID, u8 LOC_u8PinID, u8 *LOC_pu8PinValue) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8PortID <= PortD && LOC_u8PinID <= PIN7) {
		if (LOC_u8PortID == PortA) {
			*LOC_pu8PinValue = GET_BIT(PINA, LOC_u8PinID);
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortB) {
			*LOC_pu8PinValue = GET_BIT(PINB, LOC_u8PinID);
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortC) {
			*LOC_pu8PinValue = GET_BIT(PINC, LOC_u8PinID);
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortD) {
			*LOC_pu8PinValue = GET_BIT(PIND, LOC_u8PinID);
			LOC_u8ReturnValue = E_OK;
		} else {
			//NOTHING
		}
	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}

u8 MCAL_DIO_u8TogglePinValue(u8 LOC_u8PortID, u8 LOC_u8PinID) {
	u8 LOC_u8ReturnValue = E_NOT_OK;
	if (LOC_u8PortID <= PortD && LOC_u8PinID <= PIN7) {
		if (LOC_u8PortID == PortA) {
			TOGGLE_BIT(PORTA, LOC_u8PinID);
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortB) {
			TOGGLE_BIT(PORTB, LOC_u8PinID);
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortC) {
			TOGGLE_BIT(PORTC, LOC_u8PinID);
			LOC_u8ReturnValue = E_OK;
		} else if (LOC_u8PortID == PortD) {
			TOGGLE_BIT(PORTD, LOC_u8PinID);
			LOC_u8ReturnValue = E_OK;
		}

		else {
			//NOTHING
		}

	} else {
		//NOTHING
	}
	return LOC_u8ReturnValue;
}
