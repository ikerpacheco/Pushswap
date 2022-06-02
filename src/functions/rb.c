/*
** EPITECH PROJECT, 2021
** rb
** File description:
** rb
*/

#include "../../include/my.h"

void rotate_b(t_lists *lists)
{
    int i = 0;

    my_putstr("rb ");
    lists->len_b++;
    lists->l_b[lists->len_b - 1] = lists->l_b[0];

    while (i < lists->len_b + 1) {
        lists->l_b[i] = lists->l_b[i + 1];
        i++;
    }
    lists->l_b[i] = '\0';
    lists->len_b--;
}