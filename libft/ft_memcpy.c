/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:11:28 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/10 13:11:30 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t				x;
	unsigned char		*str3;
	const unsigned char	*str4;

	str3 = ((unsigned char *) str1);
	str4 = ((const unsigned char *) str2);
	x = 0;
	if (str3 == NULL && str4 == NULL)
	{
		return (0);
	}
	while (x != n)
	{
		str3[x] = str4[x];
		x++;
	}
	return ((void *)str3);
}

/*int	main(void)
{
	char	str1[] = "Abobora";
	const char	str2[] = "Mansão";
	size_t	n = 3;
	char	*y;
	
	y = ft_memcpy(str1, str2, n);
	printf("%s", y);
}*/
