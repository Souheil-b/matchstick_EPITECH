/*
** EPITECH PROJECT, 2020
** Elementary PRo
** File description:
** matchsick
*/

#include "my.h"

int error(int i)
{
    switch (i)
    {
    case -1:
        return 0;
        break;
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    }
}

void help ()
{
    my_printf("Compile it with and launch the programm with <./matchstick $SIZEOFMAP $MAXMATCHESPERTURN>\nEXEMPLE:\n\t./matchstick 5 3\n");
}

int main(int ac, char **av)
{
    char **str;
    int exit = 0;

    if (ac != 3) {
        help();
        my_printf("Invalid Size!");
        return 84;
    }
    if (my_atoi(av[1]) > 100 || my_atoi(av[1]) < 2)
        return 84;
    str = map(my_atoi(av[1]));
    exit = stop(my_atoi(av[1]), my_atoi(av[2]), str);
    if (exit == -1 || exit == 1 || exit == 2)
        return (error(exit));
    return (0);

}
