/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** game
*/

#include "runner.h"

void game(mario *mario)
{
    move(mario);
    game_display(mario);
}