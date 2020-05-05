/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** game.c
*/

#include "my.h"

char **game_player(int line, int matches, char **map, int av1)
{
    int j = av1 * 2 - 1;

    while (matches > 0) {
        if (map[line][j] == '|') {
            map[line][j] = ' ';
            matches--;
        }
        j--;
    }
    for (int i = 0; map[i]; i++)
        my_printf("%s", map[i]);
    my_printf("\n");
    return (map);
}

void ai (int av1, int av2, char **map)
{
    int ran = 0;
    int line = 0;
    int pip = 0;
    int maches = 0;

    my_printf("AI's turn...\n");
    while (pipe(map, line) == 0)
        line = rand()%(av1) + 1;
    pip = pipe(map, line);
    while (maches <= 0 || maches > av2 || maches > pip)
        maches = rand()%(av1) + 1;
    my_printf("AI removed %d match(es) from line %d\n", maches, line);
    game_player(line, maches, map, av1);
}

int first_player(int av1, int av2, char **map)
{
    int line = 0;
    int matches = 0;
    int tmp = 0;

    my_printf("Your turn:\n");
    line = my_line(av1);
    if (line == -1)
        return -1;
    matches = my_matches(av1, av2, line, map);
    my_printf("Player removed %d match(es) frome line %d\n", matches, line);
    game_player(line, matches, map, av1);
}

int stop (int av1, int av2, char **map)
{
    int pipe = 1;
    int k = 0;

    while (pipe > 0) {
        k = first_player(av1, av2, map);
        if (k == -1)
            return -1;
        if (map_pipe(map) == 0) {
            my_printf("You lost, too bad...\n");
            return 2;
        }
        ai(av1, av2, map);
        if (map_pipe(map) == 0) {
            my_printf("I lost... snif... but I'll get you next time!!\n");
            return 1;
        }
        pipe = map_pipe(map);
    }
}