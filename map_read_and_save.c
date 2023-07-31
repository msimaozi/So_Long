
#include "so_long.h"

void	save_map_2(t_data *data, size_t lines)
{
	char	*line;
	char	*temp;
	size_t	i;

	while (lines < data->game.map_y)
	{
		line = get_next_line(data->fd);
		if (!line)
		{
			close(data->fd);
			error_message("Couldn't read line", data);
		}
		data->game.map[lines] = malloc(sizeof(char) * (data->game.map_x + 1));
		i = 0;
		while (i < data->game.map_x)
		{
			data->game.map[lines][i] = line[i];
			i++;
		}
		data->game.map[lines][i] = '\0';
		free(line);
		lines++;
	}
	temp = get_next_line(data->fd);
	free(temp);
}

void	save_map(t_data *data, char *file)
{
	size_t lines;
	
	lines = 0;
	data->fd = open(file, O_RDONLY);
	data->game.map = (char **)malloc(sizeof(char *) * (data->game.map_y));
	if (!data->game.map)
	{
		close(data->fd);
		error_message("Couldn't allocate the memory inside map", data);
	}
	save_map_2(data, lines);
	close(data->fd);
}

void	read_map(t_data *data, char *file)
{
	int		x;
	char	*line;

	x = 0;
	data->fd = open(file, O_RDONLY);
	if (data->fd == -1)
		error_message("Couldn't open the file", data);
	while (1)
	{
		line = get_next_line(data->fd);
		if (!line)
		{
			free(line);
			break;
		}
		if (data->game.map_x == 0)
			data->game.map_x = ft_strlen(line) - 1;
		rectang(data, line);
		x++;
		free(line);
	}
	data->game.map_y = x;
	close(data->fd);
}
