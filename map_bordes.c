
#include "so_long.h"

void	border(t_data *data)
{
	size_t	i;
	size_t	j;
	size_t	map_x;
	size_t	map_y;

	map_x = data->game.map_x;
	map_y = data->game.map_y - 1;
	i = 0;
	while (i < map_x)
	{
		if (i >= ft_strlen(data->game.map[0]) || data->game.map[0][i] != '1' 
			|| data->game.map[map_y][i] != '1')
			error_message("Map is not surrounded by walls", data);
		i++;
	}
	j = 0;
	while (j <= map_y)
	{
		if (data->game.map[j][0] != '1' || data->game.map[j][map_x - 1] != '1')
			error_message("Map is not surrounded by walls", data);
		j++;
	}
	map_check(data);
}

void	rectang(t_data *data, char *line)
{
	if (data->game.map_x != 0 && data->game.map_x != (ft_strlen(line) - 1))
	{
		free(line);
		close(data->fd);
		error_message("The map is not rectangular", data);
	}
}
