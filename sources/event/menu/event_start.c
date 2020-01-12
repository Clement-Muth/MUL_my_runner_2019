/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** start
*/

#include "runner.h"

void event_start(mario_t *mario)
{
    sfEvent event;

    if (event.type == sfEvtMouseButtonPressed && (MOUSE_HOVER_PIPE_START)) {
        mario->scene = 2;
        mario->const_event = 2;
        sfMusic_destroy(GAME.sounds.menu);
        sfMusic_play(GAME.sounds.lvl);
    }
}