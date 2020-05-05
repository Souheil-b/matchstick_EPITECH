/*
** EPITECH PROJECT, 2019
** my_atoi
** File description:
** char to int
*/

#include "my.h"

int my_atoi(char *str)
{
    int res = 0;

    for (int i = 0; str[i] >= '0' && str[i] <= '9'; i++)
        res = res * 10 + str[i] - '0';
    return res;
}
