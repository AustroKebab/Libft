/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:57:13 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:31:10 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	r;
	int	s;

	r = 0;
	s = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			s = s * -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		r = r * 10 + *nptr - '0';
		nptr++;
	}
	return (r * s);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	ac = 2;
	printf("%d\n", ft_atoi(av[1]));
}
*/
