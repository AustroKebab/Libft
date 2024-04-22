/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:35:51 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 12:47:28 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libfth.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = node;
	}
	*lst = NULL;
}
