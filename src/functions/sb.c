/*
** EPITECH PROJECT, 2021
** sb
** File description:
** sb
*/

#include "../../include/my.h"

void swap_b(t_lists *lists)
{
    my_putstr("sb ");
    int tmp = lists->l_b[0];
    lists->l_b[0] = lists->l_b[1];
    lists->l_b[1] = tmp;
}