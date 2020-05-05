/*
** EPITECH PROJECT, 2020
** matchsick
** File description:
** display.c
*/

#include "my.h"

char **stars(char **str, int i, int j, int line)
{
    if (i == 0 || i == line + 1) {
        str[i][j] = '*';
        str[i][line * 2 + 1] = '\n';
    }
    else {
        str[i][j] = ' ';
        str[i][0] = '*';
        str[i][line*2] = '*';
        str[i][line*2+1] = '\n';
    }
    return (str);
}

char **sticks(char **str, int line)
{
    int tmp = 0;
    int j = 1;
    int sp = 0;

    while (line != 0) {
        tmp = line * 2 - 1;
        j = 1;
        while (j <= tmp) {
            str[line][j+sp] = '|';
            j++;
        }
        sp++;
        line--;
    }
}

char **map(int line)
{
    char **str = NULL;

    str = malloc(sizeof(char *) * (line + 3));
    for (int i = 0; i < (line + 2); i++) {
        str[i] = malloc(sizeof(char) * (line * 2 + 3));
        for (int j = 0; j < line * 2 + 2; j++)
            str = stars(str, i, j, line);
        str[i][line*2+2] = '\0';
    }
    sticks(str, line);
    str[line+2] = NULL;
    for (int i = 0; str[i]; i++)
        my_printf("%s", str[i]);
    my_printf("\n");
    return (str);
}

int map_pipe(char **map)
{
    int pipe = 0;

    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j] != '\n'; j++) {
            if (map[i][j] == '|')
                pipe++;
        }
    }
    return (pipe);
}