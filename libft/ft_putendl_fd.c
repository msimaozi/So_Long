/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:45:41 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/22 11:45:42 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	x;

	x = 0;
	if (!s || !fd)
		return ;
	while (s[x] != '\0')
	{
		write(fd, &s[x], 1);
		x++;
	}
	write(fd, "\n", 1);
}

/*int	main(void)
{
	char	*s = "Basd";
	int	fd = 2;
	ft_putendl_fd(s, fd);
}*/
