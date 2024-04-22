/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:11:44 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:24:47 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	char	*a;

	ac = 2;
	i = 1;
	a = av[i];
	while (*a)
	{
		if (ft_isalnum(*a))
			printf("%c is alnum \n", *a);
		else
			printf("%c is not alnum \n", *a);
		a++;
	}
	return (0);
}
*/
