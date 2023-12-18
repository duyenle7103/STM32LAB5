/*
 * command_parser_fsm.h
 *
 *  Created on: Dec 18, 2023
 *      Author: Duyen
 */

#ifndef INC_COMMAND_PARSER_FSM_H_
#define INC_COMMAND_PARSER_FSM_H_

#include "global.h"

#define INITIAL 0
#define RST_COMMAND 1
#define	OK_COMMAND 2

extern uint8_t command_flag;
extern uint32_t command_data;
extern uint8_t len;

extern char *str;

void command_parser_fsm();

#endif /* INC_COMMAND_PARSER_FSM_H_ */
