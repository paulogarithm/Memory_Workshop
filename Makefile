##
## EPITECH PROJECT, 2023
## Memory_Workshop
## File description:
## Makefile
##

MAIN		= sources/main.c\

SRC			=\
			sources/exo1.c\
			sources/exo3.c\
			sources/exo4.c\

OBJ			=	$(MAIN:.c=.o) $(SRC:.c=.o)

NAME		=	my_malloc

CFLAGS		=	-Wall -Wextra
CPPFLAGS	=	-iquote ./includes

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS)

clean:
	rm -f $(OBJ)

debug: CFLAGS += -g3
debug: all

fclean:	clean
	rm -f $(NAME)

re:	fclean all

redeb: fclean debug

.PHONY:	all clean fclean re debug redeb