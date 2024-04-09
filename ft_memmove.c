/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:39:04 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/09 14:19:04 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;
	size_t		nn;

	dp = ((char *)dest);
	sp = ((const char *)src);
	nn = 0;
	if (dp < sp)
	{
		while (nn < n)
		{
			dp[nn] = sp[nn];
			++nn;
		}
	}
	else if (dp > sp)
	{
		nn = n;
		while (nn > 0)
		{
			dp[nn - 1] = sp[nn - 1];
			--nn;
		}
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
