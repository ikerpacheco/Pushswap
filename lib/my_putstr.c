/*
** EPITECH PROJECT, 2021
** My_putstr
** File description:
** x
*/

#include "../include/my.h"

int my_lenstr (char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

void my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL)
        return;
    write(1, str, my_lenstr(str));
}
