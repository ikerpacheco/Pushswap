/*
** EPITECH PROJECT, 2021
** print array
** File description:
** my_printarr
*/

#include "../include/my.h"

void my_printarr(int len, int list[])
{
    int i = 0;

    while (i < len) {
        my_put_nbr(list[i]);
        my_putchar(' ');
        i++;
    }
}