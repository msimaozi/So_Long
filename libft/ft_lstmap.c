/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:31:15 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/23 16:31:17 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*x;
	t_list	*y;

	if (!lst || !f || !del)
		return (NULL);
	y = ft_lstnew(f(lst->content));
	if (y == NULL)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		x = ft_lstnew(f(lst->content));
		if (!x)
		{
			ft_lstclear(&y, del);
			return (NULL);
		}
		ft_lstadd_back(&y, x);
		lst = lst->next;
	}
	return (y);
}
