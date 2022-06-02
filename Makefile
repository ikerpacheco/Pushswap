##
## EPITECH PROJECT, 2021
## makefile printf
## File description:
## x
##

SRC     =		main.c \
				src/convert_nums.c	\
				src/push_swap.c \
				src/lists.c \
				src/move_right.c \
				src/move_left.c \
				lib/my_arrlen.c \
				lib/my_getnbr.c \
				lib/my_putstr.c \
				lib/my_putchar.c \
				lib/my_printarr.c \
				lib/my_put_nbr.c \
				src/functions/sa.c \
				src/check_params.c \
				src/functions/sb.c \
				src/functions/sc.c \
				src/functions/pb.c \
				src/functions/pa.c \
				src/functions/rra.c \
				src/functions/rrb.c \
				src/functions/rrr.c \
				src/functions/ra.c \
				src/functions/rb.c \
				src/functions/rr.c

OBJ     =       $(SRC:.c=.o)

NAME    =       push_swap

all:    $(NAME)

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:	fclean all