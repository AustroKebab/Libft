/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:04:12 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:20:31 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nodelst;
	void	*cont;

	nodelst = 0;
	if (!lst || !f || !del)
		return ;
	while (lst)
	{
		cont = f(lst->content);
		if (!cont || !(ft_lstadd_back(&nodelst, ft_lstnew(cont))))
		{
			ft_lstclear(&nodelst, del);
			return ;
		}
		lst = lst->next;
	}
	return (nodelst);
}
