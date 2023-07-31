/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:07:08 by msimaozi          #+#    #+#             */
/*   Updated: 2023/06/04 18:27:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "libft/libft.h"

char    *ft_strjoin_2(char *str1, char *str2)
{
    size_t  i;
    size_t  j;
    char    *new;
    
    if (!str1)
    {
        str1 = malloc(sizeof(char) * 1);
        str1[0] = '\0';
    }
    if (!str1 || !str2)
        return (0);
    new = malloc((ft_strlen(str1) * ft_strlen(str2) + 1) * sizeof(char));
    if (!new)
        return (0);
    i = -1;
    j = 0;
    if (new)
    	while (str1[++i])
        	new[i] = str1[i];
    while (str2[j] != '\0')
        new[i++] = str2[j++];
    new[ft_strlen(str1) + ft_strlen(str2)] = '\0';
    free(str1);
    return (new);
}