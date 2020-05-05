##
## EPITECH PROJECT, 2019
## Bistro
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_printf.c	\
		my_atoi.c	\
		display.c	\
		my_put_nbr.c	\
		get_line.c	\
		game.c	\
		get_nbr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS  =       -I ../../include  -g3

AR	=	ar rc

NAME	=	libmy.a

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ)
	rm -rf $(NAME)

re:
	fclean all
