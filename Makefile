
NAME = so_long

CC = cc
CFLAGS = -g -Wall -Wextra -Werror
MLXFLAGS = -L ./mlx -lmlx -Ilmlx -lXext -lX11
LIBFT = ./libft/libft.a

SRC = main.c initial.c map_read_and_save.c map_bordes.c map_check.c valid_path.c \
		get_next_line.c get_next_line_utils.c 
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