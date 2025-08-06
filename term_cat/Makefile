NAME = term-cat
SRC = src/term_cat.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Iinclude

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

