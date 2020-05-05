##
## EPITECH PROJECT, 2019
## BISTROMATIC
## File description:
## Makefile
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	=	-I include -g3

$(NAME):	$(OBJ)
		make -C lib/my
		gcc $(OBJ) $(CFLAGS) -L ./lib/my -lmy -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ)
	rm -rf $(NAME)
	make -C lib/my fclean

re:	fclean $(NAME)
