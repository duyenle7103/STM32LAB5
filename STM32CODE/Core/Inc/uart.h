/*
 * uart.h
 *
 *  Created on: Dec 18, 2023
 *      Author: Duyen
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "global.h"

#define MAX_BUFFER_SIZE 30

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);

#endif /* INC_UART_H_ */
