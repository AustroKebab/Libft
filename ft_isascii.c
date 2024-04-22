/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:10:05 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:25:01 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nb;
	int	n;

	n = 1;

	while (ac >= 2)
	{
		nb = atoi(av[n]);
		if (ft_isascii (nb))
		{
			printf("%s is ASCII.\n", av[n]);
			n++;
			ac--;
		}
		else
		{
			printf("%s is not ASCII.\n", av[n]);
			n++;
			ac--;
		}
	}
	return (0);
}
*/
