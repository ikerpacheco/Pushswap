/*
** EPITECH PROJECT, 2021
** lists
** File description:
** lists
*/

#include "../include/my.h"

t_lists *init_lists(int l_a[], int l_b[], int ac)
{
    t_lists *lists = malloc(sizeof(t_lists));

    lists->l_a = l_a;
    lists->l_b = l_b;
    lists->len_a = my_arrlen(lists->l_a, ac) - 1;
    lists->len_b = 0;

    return lists;
}