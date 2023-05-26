/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <msimaozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:04:04 by msimaozi          #+#    #+#             */
/*   Updated: 2023/03/20 16:04:04 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_message(char *msg, t_data data)
{
	ft_putstr_fd(msg, 1);
	exit(0);
}

int	line_lenght(int map)
{
	int	lenght;
	char	buf[0];
	int	bytes;
	
	buf[0] = '\0';
	lenght = 1;
	bytes = 1;
	while (bytes == 1)
	{
		bytes = read(map, buf, 1);
		if (buf[0] == '\n')
			lenght++;
	}
	return (lenght);
}

int	count_lines(int map)
{
	int	linecount;
	char	buf[0];
	int	bytes;
	
	buf[0] = '\0';
	linecount = 1;
	while (1)
	{
		bytes = read(map, buf, 1);
		if (bytes < 1)
			break ;
		if (buf[0] == '\n')
			linecount++;
	}
	return (linecount);
}

void	get_map(int map, t_data *data)
{
	int	map;
	int	line;
	int	temp;

	map = open("maps/something", O_RDONLY);
	if (map < 0)
		break ;
	if (ft_strnstr(argv[1], ".ber", ft_strlen(argv[1])) == NULL)
		break ;
	data.game.heigth = count_lines(map);
	while (line = line_lenght(map))
	{
		if ()
	}
	data.game.wigth = line_lenght(map);
	
}

void    main(int argc, char **argv)
{
	t_data data;

	if (argv < 2)
		return (0);
	get_map(data);
}