/*
 * TIMER0_int.h
 *
 *  Created on : Apr 17, 2020
 *  Version	   : 1.0.0
 *  Author     : Ahmed El-Gaafarwy
 */

#ifndef MCAL_TIMER0_INT_H_
#define MCAL_TIMER0_INT_H_


/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : TIMER0_enuCallBackOVF.                                **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : Ptr to fun,Generic Ptr.                               **/
/**	Functionality   : Calling back the function to run at ISR Handler.      **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES TIMER0_enuInit								(void);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/



/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : TIMER0_enuDelayMilliSecond.                           **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : Ptr to fun,Generic Ptr,Delay Time and Stop Time.      **/
/**	Functionality   : Working at OVF mode at one and eight prescaler.       **/
/**	                : and any prescaler at CTC mode.                        **/
/**	                : Highest accuracy at CTC mode and 64_Prescaler.        **/
/**                 : Be ensure that OCR0_REG is assigned before Calling.   **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES TIMER0_enuDelayMilliSecond 				(void (*Copy_PfunCallBack)(void*) , void * Copy_PvidParameter , u32 Copy_u32StartDelay , u32 Copy_u32StopTime);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/



/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : TIMER0_enuGeneratePWM.                                **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : Duty cycle of PWM.                                    **/
/**	Functionality   : At Fast PWM, the frequency equals :                   **/
/**	                : PRE_1= 31250 Hz, PRE_8= 39026.25 Hz, PRE_64= 488.3 Hz.**/
/**	                : PRE_256= 122 Hz, PRE_1024= 30.5 Hz.                   **/
/**	                                                                        **/
/**	                : At Phase Correct PWM, the frequency equals :          **/
/**	                : PRE_1= 15686.3 Hz, PRE_8= 1960.8 Hz, PRE_64= 245.1 Hz.**/
/**	                : PRE_256= 61.3 Hz, PRE_1024= 15.3 Hz.                  **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES TIMER0_enuGeneratePWM						(u8 Copy_u8DutyCycle);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/




/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : TIMER0_enuCallBackOVF.                                **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : Ptr to fun,Generic Ptr.                               **/
/**	Functionality   : Calling back the function to run at ISR Handler.      **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES TIMER0_enuCallBackOVF						(void (*Copy_PfunCallBack)(void*) , void * Copy_PvidParameter);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/




/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : TIMER0_enuCallBackCTC.                                **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : Ptr to fun,Generic Ptr.                               **/
/**	Functionality   : Calling back the function to run at ISR Handler.      **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES TIMER0_enuCallBackCTC						(void (*Copy_PfunCallBack)(void*) , void * Copy_PvidParameter);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/




/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : TIMER0_enuSetPreload.                                 **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : Preload Value.                                        **/
/**	Functionality   : Assigning The Preload Value.                          **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES TIMER0_enuSetPreload					(u8 Copy_u8Preload);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/





/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : TIMER0_enuSetCTC_Value.                               **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : CTC Value.                                            **/
/**	Functionality   : Assigning The CTC Value.                              **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES TIMER0_enuSetCTC_Value					(u8 Copy_u8CTC_Value);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/





/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : TIMER0_enuEnableOVF_Interrupt.                        **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : void.                                                 **/
/**	Functionality   : Enabling TIMER0 OVF Interrupt.                        **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES TIMER0_enuEnableOVF_Interrupt					(void);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/





/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : TIMER0_enuEnableCTC_Interrupt.                        **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : void.                                                 **/
/**	Functionality   : Enabling TIMER0 CTC Interrupt.                        **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES TIMER0_enuEnableCTC_Interrupt					(void);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/






#endif /* MCAL_TIMER0_INT_H_ */
