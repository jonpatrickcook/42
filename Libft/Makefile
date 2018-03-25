$(NAME) = libft.a
CFLAGS	= -Wall -Werror -Wextra -I. -c
FILES	= *.c
OBJ	= $(FILES:%.c=%.o)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:
	clean
	rm -f $(NAME)

re: fclean all
