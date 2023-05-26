/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:12:37 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/04 16:12:39 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

char	*ft_strrchr(const char *str, int x)
{
	int	y;

	y = ft_strlen((char *)str);
	while (y >= 0)
	{
		if (str[y] == x)
		{
			return ((char *)(str + y));
		}
		y--;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "Quero um quarto no PORTa ;-;";
	int	x = 'a';

	printf("%s", ft_strrchr(str, x));
}*/
