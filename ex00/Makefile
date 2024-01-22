NAME	= megaphone

CC		= c++ -Wall -Werror -Wextra -std=c++98

SRC	= megaphone.cpp


all:	$(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:		
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re