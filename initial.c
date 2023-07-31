
#include "so_long.h"

void	error_message(char *msg, t_data *data)
{
	ft_putstr_fd("ERROR: ", 1);
	ft_putstr_fd(msg, 1);
	ft_putstr_fd("\n", 1);
	free(data);
	exit(0);
}

void	ber_check(t_data *data, char *argv)
{
	int	i;

	i = ft_strlen(argv) - 1;
	if (argv[i - 3] == '.' && argv[i - 2] == 'b' 
		&& argv[i - 1] == 'e' && argv[i] == 'r')
		return ;
	else
		error_message("The file is not a .ber", data);
}

void	init(t_data *data)
{
	data->fd = 0;
	data->game.map = NULL;
	data->game.map_x = 0;
	data->game.map_y = 0;
	data->game.player = 0;
	data->game.player_x = 0;
	data->game.player_y = 0;
	data->game.coin = 0;
	data->game.coin_check = 0;
	data->game.exit = 0;
	data->game.exit_x = 0;
	data->game.exit_y = 0;
	data->game.counter = 0;
}
