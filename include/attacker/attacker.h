#ifndef ATTACKER_H
#define ATTACKER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "attacker/BS_utils.h"

    // Data to be proceed to make robot's decision
    typedef struct att_data_tag
    {
        int16_t robot_x[6];
        int16_t robot_y[6];
        int16_t robot_th[6];
        uint8_t robot_num;
        int16_t ball_x;
        int16_t ball_y;
        char obs[15];
        uint8_t total_obs;
        uint8_t game_status;

    } att_data_t;

    void att_prep_kickoff_home(att_data_t *data, uint8_t *ret);
    void att_start_kickoff_home(att_data_t *data, uint8_t *ret);

    void att_run(att_data_t *data, uint8_t *ret);

#ifdef __cplusplus
}
#endif

#endif