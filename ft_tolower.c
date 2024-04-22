/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:01:51 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:30:34 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	int	n;
	char c;

	n = 1;
	while (ac >= 2)
	{
		c = av[n][0];
		printf("%c", ft_tolower(c));
		n++;
		ac--;
	}
	printf("\n");
	return (0);
}
*/
