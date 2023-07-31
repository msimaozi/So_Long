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

int    main(int argc, char **argv)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (argc != 2)
		error_message("Too many or few arguments", data);
	init(data);
	ber_check(data, argv[1]);
	read_map(data, argv[1]);
	save_map(data, argv[1]);
	border(data);
	path_to_exit(data);
	printf("Ok!");
}