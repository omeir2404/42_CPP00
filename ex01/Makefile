NAME	= phonebook

CC		= c++ -g

CFLAGS	= -Wall -Werror -Wextra 

SRC	= main.cpp 
OBJ = main.o


all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CLFAGS) $(SRC) -o $(NAME)

clean:		
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re