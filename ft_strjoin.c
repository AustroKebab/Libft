/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:07:35 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/16 19:41:31 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;
	size_t		nn;

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

static size_t	ft_strlen(const char *s)
{
	size_t	t;

	t = 0;
	while (s[t] != '\0')
		t++;
	return (t);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	sdestlen;

	sdestlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = (char *)malloc(sdestlen * sizeof(char));
	if (dest == 0)
		return (0);
	ft_memcpy(dest, s1, ft_strlen(s1));
	ft_memcpy(dest + ft_strlen(s1), s2, ft_strlen(s2)+ 1);
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*s1 = "Habibi, ";
	const char	*s2 = "Liebe dich";
	char		*res;

	res = ft_strjoin(s1, s2);
	if (res == 0)
	{
		printf("ERROR\n");
		return (1);
	}
	printf("JOIN STR: %s\n", res);
	free(res);
	return 0;
}
*/
