/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:20:47 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:26:35 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				nn;
	const unsigned char	*sp;

	nn = 0;
	sp = s;
	while (nn < n)
	{
		if (*sp == c)
			return ((void *)sp);
		sp++;
		n++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	int			c;
	size_t		len;
	void		*ptr;

	const char	*str = av[1];
	c = av[2][0];
	len = strlen(str);
	if (ac == 3)
	{
		ptr = ft_memchr(str, c, len);
		if (ptr != NULL)
			printf("FOUND AT: %ld\n", ((char *)ptr) - str);
		else
			printf("ERROR\n");
	}
	return 0;
}
*/
