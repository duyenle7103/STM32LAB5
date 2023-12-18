/*
 * uart_communiation_fsm.c
 *
 *  Created on: Dec 18, 2023
 *      Author: Duyen
 */

#include "uart_communiation_fsm.h"

void uart_communiation_fsm()
{
	switch (command_flag)
	{
	case RST_COMMAND:
		if (timer1_flag == 1)
		{
			setTimer1(DURATION);
			HAL_UART_Transmit(&huart2, (void*)str, len, 1000);
		}
		break;
	case OK_COMMAND:
	default:
	}
}
