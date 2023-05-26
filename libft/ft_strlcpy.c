/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:17:51 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/03 14:17:54 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = ft_strlen((char *)src);
	if (n != 0)
	{
		while (src[x] != '\0' && x < n - 1)
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (y);
}

/*int	main(void)
{
	char	dest[] = "asdf";
	char	src[] = "qwer";
	unsigned int	n = 0;
	
	printf("%zu", ft_strlcpy(dest, src, n));
}*/
