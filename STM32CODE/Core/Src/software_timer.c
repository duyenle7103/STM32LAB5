/*
 * software_timer.c
 *
 *  Created on: Dec 19, 2023
 *      Author: Duyen
 */

#ifndef SRC_SOFTWARE_TIMER_C_
#define SRC_SOFTWARE_TIMER_C_

#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;

void setTimer1(int duration)
{
	timer1_counter = duration;
	timer1_flag = 0;
}
void timer1Run()
{
	timer1_counter--;
	if(timer1_counter <= 0)
	{
		timer1_flag = 1;
	}
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef * htim)
{
	if (htim->Instance == TIM2)
	{
		timer1Run();
	}
}

#endif /* SRC_SOFTWARE_TIMER_C_ */
