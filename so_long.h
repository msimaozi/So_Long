/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:35:12 by msimaozi          #+#    #+#             */
/*   Updated: 2023/02/23 10:35:13 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include "libft/libft.h"
# include<stdio.h>
# include<string.h>
# include<unistd.h>
# include<stdlib.h>
# include<fcntl.h>

typedef struct s_mlx
{
	void	*mlx_holder;
	void	*mlx_wind;
	void	*player_right;
	void	*player_left;
	void	*player_down;
	void	*player_up;
	void	*collect;
	void	*floor;
	void	*wall;
}	t_mlx;

typedef struct t_game
{
	char		**map;
	size_t		map_x;
	size_t		map_y;
	int			player;
	int			player_x;
	int			player_y;
	int			coin;
	int			coin_check;
	int			exit;
	int			exit_x;
	int			exit_y;
	int			counter;
	t_mlx		mlx;
}	t_game;

typedef struct s_data
{
	t_game	game;
	int		fd;
}	t_data;

int		main(int argc, char **argv);
void	init(t_data *data);
void	ber_check(t_data *data, char *argv);
void	read_map(t_data *data, char *file);
void	rectang(t_data *data, char *line);
void	save_map(t_data *data, char *file);
void	save_map_2(t_data *data, size_t lines);
void	border(t_data *data);
void	map_check(t_data *data);
void	content_check(t_data *data);
void	player_loc(t_data *data, int x, int y);
void	path_to_exit(t_data *data);
int		flood_fill(t_data *data, int player_x, int player_y, char **clone);
void	error_message(char *msg, t_data *data);

char	*get_next_line(int fd);
char	*ft_readsave(int fd, char *save);
char	*ft_getline(char *save);
char	*ft_save(char *save);
char	*ft_strjoin_2(char *str1, char *str2);

#endif