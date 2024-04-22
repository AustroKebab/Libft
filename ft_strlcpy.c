/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:56:35 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:29:37 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < size -1)
	{
		dst[i] = src[i];
		++i;
	}
	if (size > 0)
		dst[i] = 0;
	while (src[i] != '\0')
		++i;
	return (i);
}

/*
#include <stdio.h>
#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size);

int	main(void) 
{
	char src[] = "Hello, world!";
	char dest[20]; // Destination buffer
	size_t length;

	length = ft_strlcpy(dest, src, sizeof(dest));
	printf("Copied string: %s\n", dest);
	printf("Length: %zu\n", length);
	return 0;
}
*/
