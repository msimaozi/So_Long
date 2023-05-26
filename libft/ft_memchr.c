/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:53:08 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/11 10:53:09 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memchr(const void *str, int x, size_t n)
{
	char		*str1;
	size_t		y;

	str1 = ((char *) str);
	y = 0;
	while (y != n)
	{
		if (str1[y] == x)
		{
			return (str1 + y);
		}
		y++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Danca";
	int	x = 'c';
	size_t	n = 5;
	char	*y;
	
	y = ft_memchr(str, x, n);
	printf("%s", y);
}*/
