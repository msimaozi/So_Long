/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:16:48 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/23 11:16:49 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

int	ft_contador(int n)
{
	int	x;

	x = 0;
	if (n <= 0)
	{
		x++;
	}
	while (n != 0)
	{
		n = n / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	int		x;
	char	*str;
	long	n2;

	n2 = n;
	x = ft_contador(n);
	str = malloc((sizeof(char) * x) + 1);
	if (!str)
		return (0);
	x = x - 1;
	if (n2 == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n2 = n2 * -1;
	}
	while (n2 > 0)
	{
		str[x] = (n2 % 10) + 48;
		n2 = n2 / 10;
		x--;
	}
	str[ft_contador(n)] = '\0';
	return (str);
}

/*int	main(void)
{
	char *i1 = ft_itoa((-2147483647 -1));

	if (atoi(i1) != (-2147483647 -1))
	{
		printf("0");
		return (0);
	}
	printf("1");
}*/
