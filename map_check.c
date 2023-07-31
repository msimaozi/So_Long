
#include "so_long.h"

void	player_loc(t_data *data, int x, int y)
{
	if (data->game.map[x][y] == 'P')
	{
		data->game.player_x = x;
		data->game.player_y = y;
	}
	else if (data->game.map[x][y] == 'E')
	{
		data->game.exit_x = x;
		data->game.exit_y = y;
	}
}

void	content_check(t_data *data)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (++i < data->game.map_y)
	{
		j = -1;
		while (++j < data->game.map_x)
		{
			if (data->game.map[i][j] == 'P')
			{
				data->game.player++;
				player_loc(data, i, j);
			}
			else if (data->game.map[i][j] == 'C')
				data->game.coin++;
			else if (data->game.map[i][j] == 'E')
			{
				data->game.exit++;
				player_loc(data, i, j);
			}
		}
	}
	if (data->game.player != 1 || data->game.exit != 1 || data->game.coin < 1)
		error_message("Too many elements or too few", data);
}

void	map_check(t_data *data)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < data->game.map_x)
	{
		j = 0;
		while (j < data->game.map_y)
		{
			if (data->game.map[i][j] != '0' && data->game.map[i][j] != '1' &&
					data->game.map[i][j] != 'P' && data->game.map[i][j] != 'C' &&
					data->game.map[i][j] != 'E')
					error_message("An element is missing on the map", data);
			j++;
		}
		i++;
	}
	content_check(data);
}
