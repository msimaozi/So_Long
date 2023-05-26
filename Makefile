
NAME = so_long

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./libft/libft.a

SRC = main.c
OBJ = $(SRC:.c=.o)

all: so_long

so_long: ${OBJ} ${LIBFT}
        ${CC} ${CFLAGS} ${OBJ} ${LIBFT} -o $(NAME)

${LIBFT}:
                $(MAKE) -C ./libft

clean:
        $(MAKE) clean -C ./libft
        rm -rf *.o

fclean: clean
        $(MAKE) fclean -C ./libft
        rm -rf *.a

re: fclean all