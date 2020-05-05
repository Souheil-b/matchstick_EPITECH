/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** get_nbr
*/

#include "my.h"

int my_getline_nrb(void)
{
    char *buffer = NULL;
    size_t bufsize = 0;
    int i = 0;

    buffer = malloc(sizeof(char)*bufsize);
    getline(&buffer, &bufsize, stdin);
    i = my_atoi(buffer);
    return i;
}