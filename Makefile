##
## EPITECH PROJECT, 2024
## B-DOP-200-MPL-2-1-chocolatine-nina.arnaud
## File description:
## Makefile
##

NAME = sum
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I src
SRC = main.c src/sum.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	$(MAKE) -C tests clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C tests fclean

re: fclean all

tests_run:
	$(MAKE) -C tests

.PHONY: all clean fclean re tests_run
