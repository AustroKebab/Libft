/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:14:36 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 19:40:37 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;
	size_t		nn;

	if (dest == 0 && src == 0)
		return (0);
	dp = ((char *)dest);
	sp = ((const char *)src);
	nn = 0;
	while (nn < n)
	{
		dp[nn] = sp[nn];
		++nn;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Herst Hawara";
	char	dest[20];

	memcpy(dest, src, strlen(src) + 1);
	printf("DEST RESULT: %s\n", dest);

	return (0);
}
*/
