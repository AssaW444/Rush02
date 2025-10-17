NAME = rush-02
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c ipssi_atoi.c library.c append_utils.c \
	print_hundreds.c print_tens_units.c print_word_under_1000.c \
	print_group.c convert_number.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
