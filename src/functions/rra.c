/*
** EPITECH PROJECT, 2021
** ra
** File description:
** ra
*/

#include "../../include/my.h"

void rotate_front_a(t_lists *lists)
{
    int i = lists->len_a;

    my_putstr("rra ");
    lists->len_a++;
    while (i > 0) {
        lists->l_a[i] = lists->l_a[i - 1];
        i--;
    }
    lists->l_a[0] = lists->l_a[lists->len_a - 1];
    lists->l_a[lists->len_a - 1] = '\0';
    lists->len_a--;
}