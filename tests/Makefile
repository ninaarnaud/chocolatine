##
## EPITECH PROJECT, 2024
## B-DOP-200-MPL-2-1-chocolatine-nina.arnaud
## File description:
## Makefile
##

NAME = test_sum
CC = gcc
CFLAGS = -Wall -Wextra -Werror -lcriterion --coverage
SRC = test_sum.c ../src/sum.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *.gc*

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
