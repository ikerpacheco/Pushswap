/*
** EPITECH PROJECT, 2021
** rrb
** File description:
** rrb
*/

#include "../../include/my.h"

void rotate_front_b(t_lists *lists)
{
    int i = lists->len_b;

    my_putstr("rrb ");
    lists->len_b++;
    while (i > 0) {
        lists->l_b[i] = lists->l_b[i - 1];
        i--;
    }
    lists->l_b[0] = lists->l_b[lists->len_b - 1];
    lists->l_b[lists->len_b - 1] = '\0';
    lists->len_b--;
}