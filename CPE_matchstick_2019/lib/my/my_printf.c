/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** PRINTF
*/

#include "my.h"
#include <stdarg.h>

int my_printf(char *str, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, str);
    while (str[i] != '\0') {
        if (str[i] == '%') {
            i = i + 1;
            if (str[i] == 's')
                my_putstr(va_arg(ap, char *));
            if (str[i] == 'd' || str[i] == 'i')
                my_put_nbr(va_arg(ap, int));
            i++;
        } else {
            my_putchar(str[i]);
            i = i + 1;
        }
    }
    va_end(ap);
}
