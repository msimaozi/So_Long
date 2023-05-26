/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:26:20 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/21 13:26:22 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	y;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		sub = malloc(sizeof(char) * 1);
		if (!sub)
			return (0);
		sub[0] = '\0';
		return (sub);
	}
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	y = 0;
	while (s[y] && y < len)
	{
		sub[y] = s[start];
		start++;
		y++;
	}
	sub[y] = '\0';
	return (sub);
}

/*int	main(void)
{
	char const	s[] = "Fiddlesticks";
	unsigned int	start = 50;
	size_t	len = 5;
	char	*y;
	
	y = ft_substr(s, start, len);
	printf("%s", y);
}*/
