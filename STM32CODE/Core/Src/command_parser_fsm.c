/*
 * command_parser_fsm.c
 *
 *  Created on: Dec 18, 2023
 *      Author: Duyen
 */

#include "command_parser_fsm.h"

uint8_t command_flag = INITIAL;
uint32_t command_data = 0;
uint8_t len = 0;

char endline[] = "\r";
char rst_command[] = "!RST#\r";
char ok_command[] = "!OK#\r";
char *str = "";

void command_parser_fsm()
{
	if (strcmp((char*)&temp, endline) == 0)
	{
		if (strcmp((char*)buffer, rst_command) == 0)
		{
			command_flag = RST_COMMAND;
			command_data = 1234;//HAL_ADC_GetValue(&hadc1);
			len = sprintf(str, "!ADC=%lu#\r", command_data);
		}
		else if (strcmp((char*)buffer, ok_command) == 0)
		{
			command_flag = OK_COMMAND;
		}
		memset(buffer, '\0', sizeof(buffer));
		index_buffer = 0;
	}
}
