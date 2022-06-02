/*
** EPITECH PROJECT, 2021
** New pb
** File description:
** pb2
*/

#include "../../include/my.h"

t_lists *push_b(t_lists *lists)
{
    my_putstr("pb ");
    lists = move_right(lists);
    lists->l_b[0] = lists->l_a[0];
    lists = move_left(lists);
    return lists;
}