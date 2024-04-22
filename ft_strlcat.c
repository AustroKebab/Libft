/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:29:46 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:32:54 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	destl;
	unsigned int	srcl;
	unsigned int	res;
	unsigned int	i;

	destl = 0;
	srcl = 0;
	while (dst[destl] != '\0')
		destl++;
	while (src[srcl] != '\0')
		srcl++;
	i = 0;
	if (destl < size)
	{
		while (destl + i < size - 1)
		{
			dst[destl + i] = src[i];
			i++;
		}
		dst[destl + i] = '\0';
	}
	res = destl + srcl;
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	unsigned int	n;

	argc = 4;
	n = atoi(argv[3]);
	printf("%zu", ft_strlcat(argv[1], argv[2], n));
	return (0);
}
*/
