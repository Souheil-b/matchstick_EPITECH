/*
** EPITECH PROJECT, 2019
** matchsick
** File description:
** my.h
*/

#ifndef MY
#define MY
#include <dirent.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

// display.c
char **map(int line);
char **game_player(int line, int matches, char **map, int av1);
char **stars(char **str, int i, int j, int line);
char **sticks(char **str, int line);

int map_pipe(char **map);
int my_atoi(char *str);
int my_getline_nrb(void);
int my_getline(void);
int my_line(int av1);
int my_matches(int av1, int av2, int line, char **map);
int my_put_nbr(int nb);
int my_putstr(char *str);
int my_printf(char *str, ...);
int pipe(char **map, int line);
int stop (int av1, int av2, char **map);

typedef struct coord_s {
    int line;
    int maches;
    struct coord_s *next;
} coord_t;

void ai(int av1, int av2, char **map);
int first_player(int av1, int av2, char **map);
void my_putchar(char c);

#endif
