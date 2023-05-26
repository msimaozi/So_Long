/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:14:59 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/03 10:15:10 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

int	ft_isalpha(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	x;

	x = 'a';
	printf("%i\n", ft_isalpha(x));
	return (0);
}*/
