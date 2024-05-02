/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:14:36 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/26 15:14:33 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	if (!dest && !src)
		return (0);
	dp = ((char *)dest);
	sp = ((const char *)src);
	if (dp > sp && dp < sp + n)
	{
		while (n--)
			dp[n] = sp[n];
	}
	else
	{
		while (n--)
			*dp++ = *sp++;
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
