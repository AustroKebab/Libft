/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:23:43 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 17:06:33 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				nn;
	const unsigned char	*s1p;
	const unsigned char	*s2p;

	nn = 0;
	s1p = s1;
	s2p = s2;
	while (nn < n)
	{
		if (*s1p != *s2p)
			return (*s1p - *s2p);
		s1p++;
		s2p++;
		nn++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	argc = 4;

	char	*str1 = argv[1];
	char	*str2 = argv[2];
	size_t	n = atoi(argv[3]);
	int		r = ft_memcmp(str1, str2, n);

	if (r == 0)
		printf("%s and %s are equal", str1, str2);
	else if (r < 0)
		printf("%s is less than %s", str1, str2);
	else
		printf("%s is greater than %s", str1, str2);
	return (0);
}
*/
