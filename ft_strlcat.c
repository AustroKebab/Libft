/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:29:46 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 16:41:04 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destl;
	size_t	srcl;
	size_t	res;
	size_t	i;

	destl = ft_strlen(dst);
	srcl = ft_strlen(src);
	res = destl + srcl;
	i = 0;
	if (size <= destl)
		return (srcl + size);
	while (src[i] != '\0' && destl + i < size - 1)
	{
		dst[destl + i] = src[i];
		i++;
	}
	dst[destl + i] = '\0';
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
