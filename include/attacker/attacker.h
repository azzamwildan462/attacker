#ifndef ATTACKER_H
#define ATTACKER_H

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "multirole_func/multirole_func.h"
#include "motion/motion.h"

//=--------Global--------=//
extern uint8_t game_status;
extern uint8_t n_active_robot;
static uint16_t game_sub_status;
extern uint8_t n_active_robot;
extern uint8_t style;

bool PreparationKickOffAtt();

void GameMainSingleAtt();
void GameMainDoubleAtt();
void GameMainTripleAtt();
void GameMainQuadrupleAtt();
#endif