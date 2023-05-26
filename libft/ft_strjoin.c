/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:02:54 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/21 14:02:56 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	x;
	size_t	y;

	if (!s1 || !s2)
		return (0);
	x = 0;
	y = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (0);
	while (x != ft_strlen(s1))
		str[x++] = s1[y++];
	y = 0;
	while (y != ft_strlen(s2))
		str[x++] = s2[y++];
	str[x] = '\0';
	return (str);
}

/*int	main(void)
{
	char const	s1[] = "Vel";
	char const	s2[] = "'koz";
	char	*y;
	
	y = ft_strjoin(s1, s2);
	printf("%s", y);
}*/
