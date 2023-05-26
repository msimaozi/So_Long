/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:46:04 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/03 14:46:06 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	x;
	size_t	y;
	size_t	w;
	size_t	z;

	if ((!dest || !src) && n == 0)
		return (0);
	x = ft_strlen(dest);
	y = ft_strlen((char *) src);
	w = x;
	z = 0;
	if (n <= x)
		return (n + y);
	while (src[z] != 0 && w < n -1)
	{
		dest[w] = src[z];
		w++;
		z++;
	}
	dest[w] = '\0';
	return (x + y);
}

/*int	main(void)
{
	char dest[150] = "aa";
	char src[150] = "aa";
	int n = 3;
	
	printf("%s\n %s\n %d\n", dest, src, ft_strlcat(dest, src, size));
}*/
