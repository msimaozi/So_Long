/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:13:16 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/11 11:13:18 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str3;
	unsigned char	*str4;
	size_t			x;

	str3 = ((unsigned char *) str1);
	str4 = ((unsigned char *) str2);
	x = 0;
	while (x != n)
	{
		if (str3[x] == str4[x])
		{
			x++;
		}
		else
		{
			return (str3[x] - str4[x]);
		}
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "Bigode";
	char	str2[] = "Barbicha";
	size_t	n = 3;
	char	y;
	
	y = ft_memcmp(str1, str2, n);
	printf("%d", y);
}*/
