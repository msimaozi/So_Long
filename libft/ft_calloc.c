/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:32:49 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/11 15:32:50 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	char	*ptr;

	ptr = malloc(n * s);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, n * s);
	return (ptr);
}

/*int	main(void)
{
	size_t	n = 3;
	size_t	s = 6;
	char	*y;
	
	y = ft_calloc(n, s);
	printf("%s", y);
}*/
