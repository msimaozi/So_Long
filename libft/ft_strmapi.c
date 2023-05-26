/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:07:49 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/22 11:07:50 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	x;

	if (!s)
		return (0);
	str = malloc((sizeof(char) * ft_strlen((char *)s)) + 1);
	if (!s || str == NULL)
		return (0);
	x = 0;
	while (s[x] != '\0')
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}

/*int	main(void)
{
	char *b = "override this !";
	char b2[0xF0];
	size_t size = strlen(b);

	for (size_t i = 0; i < size; i++)
		b2[i] = ft_strmapi(b, b[i]);
	b2[size] = 0;
	char *ret = ft_strmapi(b, f_strmapi);
	if (!strcmp(b2, ret))
		printf("TEST_SUCCESS");
		return (1);
	printf("TEST_FAILED");
	return (0);
}*/
