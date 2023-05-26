/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:58:04 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/03 10:58:07 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_isalnum(char x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	if (x >= 'A' && x <= 'Z')
		return (1);
	if (x >= '0' && x <= '9')
		return (2);
	else
		return (0);
}

/*int	main(void)
{
	char	x;

	x = 'A';
	printf("%i\n", ft_isalnum(x));
	return (0);
}*/
