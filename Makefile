CC = clang
CFLAGS = -Wall -Werror -Wextra

SRC = push_swap.c push_swap_utils.c push_swap_sort.c push_swap_cmd.c
OBJ = $(SRC:.cc=.o)
EXEC = push_swap

all: $(EXEC)

$(EXEC): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $(OBJ)

fclean: clean
	@rm -f $(EXEC)

clean:
	@rm -f $(OBJS)

re: fclean all
