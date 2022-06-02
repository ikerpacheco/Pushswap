/*
** EPITECH PROJECT, 2021
** rra
** File description:
** rra
*/

#include "../../include/my.h"

void rotate_a(t_lists *lists)
{
    int i = 0;

    my_putstr("ra ");
    lists->len_a++;
    lists->l_a[lists->len_a - 1] = lists->l_a[0];

    while (i < lists->len_a + 1) {
        lists->l_a[i] = lists->l_a[i + 1];
        i++;
    }
    lists->l_a[i] = '\0';
    lists->len_a--;
}