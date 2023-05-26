/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:01:51 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/08 12:01:53 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	x;
	unsigned char	*str3;
	unsigned char	*str4;

	x = 0;
	str3 = (unsigned char *) str1;
	str4 = (unsigned char *) str2;
	while ((str3[x] || str4[x]) && x != n)
	{
		if (str3[x] != str4[x])
		{
			return (str3[x] - str4[x]);
		}
		x++;
	}
	return (0);
}

/*#include<stdio.h>

int	main(void)
{
	char	str1[] = "abc";
	char	str2[] = "abc";
	size_t	n = 9;
	
	printf("%d", ft_strncmp(str1, str2, n));
}*/
