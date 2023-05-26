/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:39:19 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/21 16:39:20 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

int	ft_veseta(char c, char const *set)
{
	int	x;

	x = 0;
	while (set[x])
	{
		if (set[x++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str2;
	int		x;
	int		y;
	int		z;

	x = 0;
	z = 0;
	if (s1 == 0 || set == 0)
		return (0);
	y = (int)ft_strlen((char *)s1);
	while (s1[x] && ft_veseta(s1[x], set))
		x++;
	while (y > x && ft_veseta(s1[y - 1], set))
		y--;
	str2 = (char *)malloc(sizeof(char) * (y - x + 1));
	if (!str2)
		return (0);
	while (x < y)
	{
		str2[z] = s1[x];
		z++;
		x++;
	}
	str2[z] = '\0';
	return (str2);
}

/*int	main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1, " \n\t");

	if (!strcmp(ret, s2))
		printf("1");
	printf("%s", ret);
	printf("0");
}*/
