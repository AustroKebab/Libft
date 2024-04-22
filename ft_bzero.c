/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:36:06 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:24:29 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	bzero(void *s, size_t n)
{
	unsigned char	*sp;
	size_t			nn;

	sp = ((unsigned char *)s);
	nn = 0;
	while (nn < n)
	{
		*sp++ = 0;
		++nn;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	test_string[13];
	strcpy(test_string, "Herst Hawara");
	printf("Before bzero: %s\n", test_string);
	bzero(test_string, sizeof(test_string));
	printf("After bzero: %s\n", test_string);
	return (0);
}
*/
