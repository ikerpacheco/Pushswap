/*
** EPITECH PROJECT, 2021
** pa
** File description:
** pa
*/

#include "../../include/my.h"

t_lists *move_left2(t_lists *lists)
{
    int i = 0;

    while (i < lists->len_b - 1) {
        lists->l_b[i] = lists->l_b[i + 1];
        i++;
    }
    lists->l_b[i] = '\0';
    lists->len_b--;
    return lists;
}

t_lists *move_right2(t_lists *lists)
{
    int i = lists->len_a;

    lists->len_a++;
    while (i > 0) {
        lists->l_a[i] = lists->l_a[i - 1];
        i--;
    }
    return lists;
}

t_lists *push_a(t_lists *lists)
{
    int i = 0;

    lists = move_right2(lists);
    lists->l_a[0] = lists->l_b[0];
    lists = move_left2(lists);
    return lists;
}