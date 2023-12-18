/*
 * global.h
 *
 *  Created on: Dec 18, 2023
 *      Author: Duyen
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "uart.h"
#include "software_timer.h"
#include "command_parser_fsm.h"
#include "uart_communiation_fsm.h"
#include <stdio.h>
#include <string.h>

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;
extern TIM_HandleTypeDef htim2;

#endif /* INC_GLOBAL_H_ */
