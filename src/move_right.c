/*
** EPITECH PROJECT, 2021
** move_right
** File description:
** move_right
*/

#include "../include/my.h"

t_lists *move_right(t_lists *lists)
{
    int i = lists->len_b;

    lists->len_b++;
    while (i > 0) {
        lists->l_b[i] = lists->l_b[i - 1];
        i--;
    }
    return lists;
}