/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my
*/

#include <stdio.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#include "structs/lists.h"

#ifndef __MY_H__
    #define __MY_H__

    int my_arrlen(int list[], int ac);

    t_lists *init_lists(int l_a[], int l_b[], int ac);

    void swap_a(t_lists *lists);

    void swap_b(t_lists *lists);

    void swap_c(t_lists *lists);

    void rotate_a(t_lists *lists);

    void rotate_b(t_lists *lists);

    void rotate_front_a(t_lists *lists);

    void rotate_front_b(t_lists *lists);

    void rotate_front_r(t_lists *lists);

    void my_printarr(int ac, int list[]);

    t_lists *push_b(t_lists *lists);

    t_lists *push_a(t_lists *lists);

    t_lists *move_left(t_lists *lists);

    t_lists *move_right(t_lists *lists);

    void my_putstr(char const *str);

    int check_params(t_lists *lists);

    void my_putchar(char c);

    int if_negative(int nb);

    void printing_my_nbr(int nb);

    int my_put_nbr(int nb);

    int find_smallest(t_lists *lists);

    int find_small_pos(t_lists *lists);

    int convert_nums(int ac, char **av);

    int checks_if_num(char c);

    int my_getnbr(char const *str);

    void push_swap(t_lists *lists);

    int main(int ac, char **av);

#endif /* !MY_H_ */
