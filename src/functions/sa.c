/*
** EPITECH PROJECT, 2021
** sa function
** File description:
** sa
*/

#include "../../include/my.h"

void swap_a(t_lists *lists)
{
    my_putstr("sa ");
    int tmp = lists->l_a[0];
    lists->l_a[0] = lists->l_a[1];
    lists->l_a[1] = tmp;
}