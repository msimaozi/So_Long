/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:12:59 by msimaozi          #+#    #+#             */
/*   Updated: 2023/07/06 09:48:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

size_t	ft_strlen(char const *str)
{
	size_t	x;

	x = 0;
	if (!str)
		return (0);
	while (str[x] != '\0')
		x++;
	return (x);
}

/*int	main(void)
{
	char	*str;
	
	str = "abc";
	printf("Tem %i caracteres", ft_strlen(str));
}*/
