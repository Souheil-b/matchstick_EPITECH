/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** solo
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int res;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            res = (nb % 10);
            nb = (nb - res) / 10;
            my_put_nbr(nb);
            my_putchar(48 + res);
        }
        else
            my_putchar(48 + nb % 10);
    }
}
