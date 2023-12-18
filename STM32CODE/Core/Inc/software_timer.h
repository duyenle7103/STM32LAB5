/*
 * software_timer.h
 *
 *  Created on: Dec 19, 2023
 *      Author: Duyen
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "global.h"

#define DURATION 300

extern int timer1_flag;

void setTimer1(int duration);
void timer1Run();
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

#endif /* INC_SOFTWARE_TIMER_H_ */
