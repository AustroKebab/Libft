/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:34:56 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:28:03 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*sp;
	unsigned char	cv;
	size_t			nn;

	sp = s;
	cv = ((unsigned char)c);
	nn = 0;
	while (nn < n)
	{
		sp[nn] = cv;
		++nn;
	}
	return (s);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[69];
	char	str2[69];

	ft_memset(str, 'A', sizeof(str));
	memset(str2, 'A', sizeof(str2));
	if (memcmp(str, str2, sizeof(str)) == 0)
		printf("GUCCI\n");
	else
		printf("ERROR\n");
	return (0);
}
*/
