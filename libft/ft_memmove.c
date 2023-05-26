/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:12:13 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/10 16:12:15 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	if (str1 == NULL && str2 == NULL)
		return (0);
	if (str2 < str1)
	{
		while (n != 0)
		{
			n--;
			((char *)str1)[n] = ((char *)str2)[n];
		}
	}
	else if (str2 > str1)
		ft_memcpy(str1, str2, n);
	return (str1);
}

/*int	main(void)
{
	char	str1[] = "Marcela, Nuno e Martim";
	char	str2[] = "abobrinha";
	size_t	n = 3;
	char	*y;
	
	y = ft_memmove(str1, str2, n);
	printf("%s", y);
}*/
