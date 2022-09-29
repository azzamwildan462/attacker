#include "attacker/attacker.h"

void att_prep_kickoff_home(att_data_t *data, uint8_t *ret)
{
    printf("ATT_Prep_kickoff: %d %d\n", data->robot_x[data->robot_num], data->robot_y[data->robot_num]);
}

void att_start_kickoff_home(att_data_t *data, uint8_t *ret)
{
    printf("ATT_Start_kickoff: %d %d\n", data->robot_x[data->robot_num], data->robot_y[data->robot_num]);
    *ret = 100;
}

void att_run(att_data_t *data, uint8_t *ret)
{
    // printf("stat: %d \n", data->game_status);

    switch (data->game_status)
    {
    case PREP_KICKOFF_HOME:
        att_prep_kickoff_home(data, ret);
        break;
    case START_KICKOFF_HOME:
        att_start_kickoff_home(data, ret);
        break;
    }
}
