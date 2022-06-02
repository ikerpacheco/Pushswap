/*
** EPITECH PROJECT, 2021
** check params
** File description:
** check_params
*/

#include "../include/my.h"

int check_params(t_lists *lists)
{
    int i = 0;
    int counter = 0;

    if (lists->len_a == 1) {
        my_putstr("\n");
        return 84;
    }
    while (i < lists->len_a - 1) {
        if (lists->l_a[i] > lists->l_a[i + 1])
            return 0;
        i++;
    }
    my_putstr("\n");
    return 84;
}