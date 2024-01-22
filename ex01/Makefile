NAME	= phonebook

CC		= c++ -Wall -Werror -Wextra -std=c++98

SRC	= main.cpp 

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CLFAGS) $(SRC) -o $(NAME)

clean:		
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re