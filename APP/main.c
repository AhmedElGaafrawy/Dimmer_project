/*
 * main.c
 *
 *  Created on: Apr 19, 2020
 *      Author: hp
 */
#include "../LIBRARY/stdTypes.h"
#include "../LIBRARY/BIT_MATH.h"
#include "../LIBRARY/errorStates.h"

#include "../MCAL/GIE/GIE_int.h"
#include "../MCAL/GIE/GIE_priv.h"

#include "../MCAL/DIO/DIO_int.h"

#include "../MCAL/ADC/ADC_priv.h"
#include "../MCAL/ADC/ADC_int.h"

#include "../MCAL/TIMER0/TIMER0_int.h"

#include "../HAL/LED/LED_int.h"

void fun (void *p);
u8 adc=0;

int main ()
{
	DIO_PINS_enuInit();
	LED_enuInit();
	ADC_enuInit();
	TIMER0_enuInit();

	ADC_DisableTrigger();
	ADC_Enable();
	ADC_EnableInterrupt();
	ADC_enuSelectChannel(0);
	ADC_enuCallBackFunction( fun , NULL);
	GIE_enuEnable();

	while (1)
	{
		ADC_StartConversion();
		TIMER0_enuSetCTC_Value(adc);
	}

	return 0;
}

void fun (void *p)
{
	ADC_enuReadHighRegister(&adc);
}
