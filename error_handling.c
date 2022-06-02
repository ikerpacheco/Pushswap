/*
** EPITECH PROJECT, 2022
** error_handling
** File description:
** error_handling
*/

#include "../include/my.h"

int error_handling(t_boats **boats)
{
    int i = 0;

    if (boats[0]->lenght != '2')
        return 84;
    if (boats[1]->lenght != '3')
        return 84;
    if (boats[2]->lenght != '4')
        return 84;
    if (boats[3]->lenght != '5')
        return 84;
    while (i < 5) {
        if ((boats[i]->posix - boats[i]->posfx) != (boats[i]->lenght - 1) && (boats[i]->posiy - boats[i]->posfy) != (boats[i]->lenght - 1))
            return 84;
        i++;
    }
}