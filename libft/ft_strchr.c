/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:35:11 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/04 10:35:15 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

char	*ft_strchr(const char *str, int x)
{
	char	*str2;
	int		y;

	str2 = (char *) str;
	y = 0;
	while (str2[y] != '\0')
	{
		if (str2[y] == x)
			return (str2 + y);
		y++;
	}
	if (x == 0)
		return (str2 + y);
	return (0);
}

/*int	main(void)
{
	char	str[] = "Quero comer";
	char	x;

	x = 'r';
	printf("%s", ft_strchr(str, x));
}*/
