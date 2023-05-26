/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:37:01 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/10 12:37:04 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	ft_bzero(void *str, size_t n)
{
	char		*str1;
	size_t		x;

	x = 0;
	str1 = (char *)str;
	while (x < n)
	{
		str1[x] = '\0';
		x++;
	}
}

/*int	main(void)
{
	char	str[] = "Alguma coisa";
	unsigned int	n = 3;
	char	*y;
	
	y = ft_bzero(str, n);
	printf("%s", y);
}*/
