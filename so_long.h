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

# include "libft/libft.h"
# include "get_next_line.h"
# include <unistd.h>
# include <stdio.h>

typedef struct s_player
{
        int     x;
        int     y;
}               t_player;

typedef struct t_game
{
        void    *mlx;
        void    *window;
        int     **map;
        int     heigth;
        int     wigth;
        t_player player;
}       t_game;

typedef struct s_data
{
        t_game  game;
}       t_data;

void    main(t_data *data, char *str);

#endif