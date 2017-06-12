NAME = malloc

FLAGS = -Wall -Werror -Wextra -g3 -I includes -o

SRC = src/malloc.c

all: $(NAME)

$(NAME): $(SRC)
	gcc $(FLAGS) $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
