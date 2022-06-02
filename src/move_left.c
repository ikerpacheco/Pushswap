/*
** EPITECH PROJECT, 2021
** move left
** File description:
** move_left
*/

#include "../include/my.h"

t_lists *move_left(t_lists *lists)
{
    int i = 0;

    while (i < lists->len_a - 1) {
        lists->l_a[i] = lists->l_a[i + 1];
        i++;
    }
    lists->l_a[i] = '\0';
    lists->len_a--;
    return lists;
}