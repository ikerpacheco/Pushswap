/*
** EPITECH PROJECT, 2021
** my putchar
** File description:
** my_putchar
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}