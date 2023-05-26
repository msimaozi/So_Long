/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:19:41 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/10 11:19:43 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	*ft_memset(void *str, int x, size_t n)
{
	unsigned char		*str1;
	size_t				y;

	str1 = ((unsigned char *) str);
	y = 0;
	while (y != n)
	{
		str1[y] = x;
		y++;
	}
	return (str1);
}

/*#include<stdio.h>

int	main(void)
{
	char	str[] = "Return";
	int	x;
	size_t	n;
	char *y;
	
	x = 's';
	n = 2;
	y = ft_memset(str, x, n);
	printf("%s \n", y);
}*/
