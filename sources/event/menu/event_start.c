/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** start
*/

#include "runner.h"

void event_start(mario *mario)
{
    sfEvent event;

    if (event.type == sfEvtMouseButtonPressed && (MOUSE_HOVER_PIPE_START)) {
        my_printf("erzfkhf\n");
        mario->scene = 2;
        mario->const_event = 2;
    }
}