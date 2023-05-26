/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:30:25 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/08 15:30:27 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

int	ft_atoi(char *str)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = 1;
	while (str[x] == 32 || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
		z = z * -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		y = (y * 10) + (str[x] - '0');
		x++;
	}
	return (y * z);
}

/*int	 main(void)
{
	char	str[] = "-123THERE IS A NYANCAT UNDER YOUR BED";
	
	printf("%d", ft_atoi(str));
}*/
