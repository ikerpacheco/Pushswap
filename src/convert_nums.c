/*
** EPITECH PROJECT, 2021
** push_swap
** File description:
** push_swap
*/

#include "../include/my.h"

int find_smallest(t_lists *lists)
{
    int i = 0;
    int z = 0;
    int pos = 0;
    int min = lists->l_a[0];

    while (i < lists->len_a) {
        if (lists->l_a[i] < min)
            min = lists->l_a[i];
        i++;
    }
    return min;
}

int find_small_pos(t_lists *lists)
{
    int i = 0;
    int z = 0;
    int pos = 0;
    int counter = 0;
    int min = lists->l_a[0];

    while (i < lists->len_a) {
        counter++;
        if (lists->l_a[i] < min) {
            min = lists->l_a[i];
            pos = counter - 1;
        }
        i++;
    }
    return pos;
}

int convert_nums(int ac, char **av)
{
    int l_a[ac - 1];
    int l_b[ac - 1];
    t_lists *lists = init_lists(l_a, l_b, ac);
    int c = 0;
    int a = 1;
    int mid = 0;
    int b = 0;
    int k = 0;
    int nb = 0;

    while (av[a] != NULL) {
        lists->l_a[c] = my_getnbr(av[a]);
        c++;
        a++;
    }
    if (check_params(lists) == 84)
        return 84;
    push_swap(lists);
}
