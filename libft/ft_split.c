/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:34:59 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/24 10:35:00 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include"libft.h"

static int	ft_conta(char const *s, char c)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			x++;
		else
		{
			y++;
			while (s[x] && s[x] != c)
				x++;
		}
	}
	return (y);
}

static char	*ft_coloca(char *p, char const *s, int x, int len)
{
	int	y;

	y = 0;
	while (len > 0)
	{
		p[y] = s[x - len];
		y++;
		len--;
	}
	p[y] = '\0';
	return (p);
}

static char	**ft_separa(char const *s, char c, char **s2, int p)
{
	int	x;
	int	y;
	int	len;

	x = 0;
	y = 0;
	len = 0;
	while (y < p)
	{
		while (s[x] && s[x] == c)
			x++;
		while (s[x] && s[x] != c)
		{
			x++;
			len++;
		}
		s2[y] = (char *)malloc(sizeof(char) * (len + 1));
		if (!s2)
			return (0);
		ft_coloca(s2[y], s, x, len);
		len = 0;
		y++;
	}
	s2[y] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	x;

	if (!s)
		return (0);
	x = ft_conta(s, c);
	s2 = (char **)malloc(sizeof(char *) * (x + 1));
	if (!s2)
		return (0);
	ft_separa(s, c, s2, x);
	return (s2);
}

/*int	main(void)
{
	char const s[] = "Eu estou com fome";
	char	c = ' ';
	char	**y;
	
	y = ft_split(s, c);
	printf("%s\n", *y);
}*/
