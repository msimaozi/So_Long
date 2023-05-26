/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:29:48 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/22 11:29:49 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	x = 0;
	if (!s)
		return ;
	while (s[x] != '\0')
	{
		write(fd, &s[x], 1);
		x++;
	}
}

/*int	main(void)
{
	char	*s = "Beeeesd";
	int	fd = 2;
	ft_putstr_fd(s, fd);
}*/
