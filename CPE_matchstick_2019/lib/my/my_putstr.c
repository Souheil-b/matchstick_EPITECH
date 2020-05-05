/*
** EPITECH PROJECT, 2019
** Day04_task02
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char *str)
{
    int a = 0;

    while (str[a] != '\0')
    {
        my_putchar(str[a]);
        a++;
    }
}
