/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:32:14 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/08 15:32:18 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	x;
	size_t	y;
	char	*str3;
	char	*str4;

	x = 0;
	str3 = (char *) str1;
	str4 = (char *) str2;
	if (!*str4 || (!*str4 && n == 0))
		return (str3);
	if (n == 0)
		return (0);
	while (str3[x] != '\0' && x < n)
	{
		y = 0;
		while (str4[y] == str3[x + y] && x + y < n)
		{
			if (str4[y + 1] == '\0')
				return (str3 + x);
			y++;
		}
		x++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "MZIRIBMZIRIBMZE123";
	char	str2[] = "MZIRIBMZE";
	unsigned int	n = ft_strlen(str2);
	
	printf("%s", ft_strnstr(str1, str2, n));
}*/
