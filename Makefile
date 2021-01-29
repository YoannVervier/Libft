CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC) 
	ar rc $(NAME) $(OBJ) 
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
