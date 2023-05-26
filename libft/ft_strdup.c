/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:30:21 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/14 10:30:22 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;
	char	*str1;
	int		x;

	x = 0;
	str1 = (char *) str;
	str2 = malloc(ft_strlen(str1) + 1);
	if (!str2)
		return (0);
	while (str[x] != '\0')
	{
		str2[x] = str[x];
		x++;
	}
	str2[x] = '\0';
	return (str2);
}

/*int	main(void)
{
	char	str[] = "salada";
	char	*y;
	
	y = ft_strdup(str);
	printf("%s", y);
}*/
