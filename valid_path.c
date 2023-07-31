
#include "so_long.h"

int		flood_fill(t_data *data, int player_x, int player_y, char **clone)
{
	if ((data->game.player_x < 0 || (size_t)data->game.player_x >= data->game.map_x)
		|| (data->game.player_y < 0 || (size_t)data->game.player_y >= data->game.map_y)
		|| clone[data->game.player_y][data->game.player_x] == '1')
		return (0);
	else if (clone[data->game.player_y][data->game.player_x] == 'C')
		data->game.coin_check++;
	else if (clone[data->game.player_y][data->game.player_x] == 'E')
		data->game.exit = 1;
	clone[data->game.player_y][data->game.player_x] = '1';
	flood_fill(data, player_x + 1, player_y, clone);
	flood_fill(data, player_x - 1, player_y, clone);
	flood_fill(data, player_x, player_y + 1, clone);
	flood_fill(data, player_x, player_y - 1, clone);
	if (data->game.coin_check == data->game.coin)
		return (data->game.exit);
	return (0);
}

void	path_to_exit(t_data *data)
{
	char	**clone;
	size_t	i;

	i = 0;
	clone = malloc(sizeof(char *) * data->game.map_y);
	while (i < data->game.map_y)
	{
		clone[i] = ft_strdup(data->game.map[i]);
		if (!clone[i])
		{
			while (--i)
				free(clone[i]);
			free(clone);
		}
		i++;
	}
	if (flood_fill(data, data->game.player_x, data->game.player_y, clone) == 0)
	{
		free(clone);
		error_message("Couldn't find a valide path", data);
	}
	i = -1;
	while (++i < data->game.map_y)
		free(clone[i]);
	free(clone);
}