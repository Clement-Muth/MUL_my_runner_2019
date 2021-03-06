/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** sf_event_hover
*/

#include "runner.h"

static void start_game(mario_t *mario)
{
    TRANS.scale.pipe_game.x = 1.4;
    TRANS.scale.pipe_game.y = .4;
}

static void new_game(mario_t *mario)
{
    TRANS.scale.pipe_new.x = 1.4;
    TRANS.scale.pipe_new.y = .4;
}

static void generic(mario_t *mario)
{
    TRANS.scale.pipe_gen.x = 1.4;
    TRANS.scale.pipe_gen.y = .4;
}

void mouse_hover(mario_t *mario)
{
    if (MOUSE_HOVER_PIPE_START)
        (start_game(mario));
    else {
        TRANS.scale.pipe_game.x = 1.1;
        TRANS.scale.pipe_game.y = .4;
    }
    if (MOUSE_HOVER_PIPE_NEW)
        (new_game(mario));
    else {
        TRANS.scale.pipe_new.x = 1.1;
        TRANS.scale.pipe_new.y = .4;
    }
    if (MOUSE_HOVER_PIPE_GEN)
        (generic(mario));
    else {
        TRANS.scale.pipe_gen.x = 1.1;
        TRANS.scale.pipe_gen.y = .4;
    }
}