/*
** EPITECH PROJECT, 2021
** push swap
** File description:
** push_swap
*/

#include "../include/my.h"

void swipe_left(t_lists *lists, int pos)
{
    int counter = pos;

    while (counter > 0) {
        rotate_a(lists);
        counter--;
    }
    push_b(lists);
}

void swipe_right(t_lists *lists, int pos)
{
    int counter = 0;
    int j = lists->len_a - pos;

    while (counter < j) {
        rotate_front_a(lists);
        counter++;
    }
    push_b(lists);
}

void push(t_lists *lists)
{
    while (lists->len_b > 0) {
        if (lists->len_b == 1)
            my_putstr("pa\n");
        else
            my_putstr("pa ");
        push_a(lists);
    }
}

void push_swap(t_lists *lists)
{
    int min = 0;
    int pos = 0;

    while (lists->len_a > 0) {
        min = find_smallest(lists);
        pos = find_small_pos(lists);
        if (pos > lists->len_a / 2)
            swipe_right(lists, pos);
        else
            swipe_left(lists, pos);
    }
    push(lists);
}