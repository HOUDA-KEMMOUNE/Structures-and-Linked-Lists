CFLAGS = -Wall -Wextra -Werror
SRC = *.c
OBj = *.o
NAME = result

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) $(SRC) -o $@

%.o: %.c
	gcc $(CFLAGS) -c $(SRC) -o $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
