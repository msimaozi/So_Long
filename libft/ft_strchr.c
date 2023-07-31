/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:35:11 by msimaozi          #+#    #+#             */
/*   Updated: 2023/06/23 07:33:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

char	*ft_strchr(const char *str, int x)
{
	int		y;

	y = 0;
	if (!str)
		return (0);
	if (x == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[y] != '\0')
	{
		if (str[y] == ((char)x))
			return ((char *)&str[y]);
		y++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Quero comer";
	char	x;

	x = 'r';
	printf("%s", ft_strchr(str, x));
}*/
