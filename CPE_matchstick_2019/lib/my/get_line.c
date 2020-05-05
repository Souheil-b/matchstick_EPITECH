/*
** EPITECH PROJECT, 2020
** matchsick
** File description:
** game.c
*/

#include "my.h"

int my_getline(void)
{
    char *buffer = NULL;
    size_t bufsize;
    int i = 0;

    buffer = malloc(sizeof(char)*bufsize);
    if (getline(&buffer, &bufsize, stdin) == -1)
        return -1;
    for (int j = 0; buffer[i] && buffer[j] != '\n'; j++) {
        if (buffer[j] < '0' || buffer[j] > '9') {
            my_printf("Error: invalid input (positive number expected)\n");
            return (-3);
        }
    }
    i = my_atoi(buffer);
    return i;
}

int pipe(char **map, int line)
{
    int tmp = 0;

    for (int j = 1; map[line][j] != '\n'; j++) {
        if (map[line][j] == '|')
            tmp++;
    }
    return tmp;
}

int my_line (int av1)
{
    int line = -2;

    while (line < 0 || line > av1) {
        my_printf("Line: ");
        line = my_getline();
        if (line == 0) {
            my_printf("Error: this line is out of range\n");
            return 0;
        }
        if (line == -1)
            return -1;
        if (line > av1)
            my_printf("Error: this line is out of range\n");
    }
    return line;
}

int my_matches(int av1, int av2, int line, char **map)
{
    int matches = -2;
    int tmp = 0;

    my_printf("Matches: ");
    matches = my_getline();
    tmp = pipe(map, line);
    while (matches < 1 || matches > av2 || matches > tmp) {
        if (matches > av2) {
            my_printf("Error: you cannot remove more than");
            my_printf(" matches per turn\n", av2);
        }
        if (matches == 0)
            my_printf("Error: you have to remove at least one match\n");
        if (matches >= tmp)
            my_printf("Error: not enough matches on this line\n");
        line = my_line(av1);
        my_printf("Matches: ");
        matches = my_getline();
        tmp = pipe(map, line);
        }
}