/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:07:35 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/26 13:47:42 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	sdestlen;

	sdestlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = (char *)ft_calloc(sdestlen, sizeof(char));
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
	const char	*s1 = "";
	const char	*s2 = "";
	char		*res;

	res = ft_strjoin(s1, s2);
	if (res == 0)
	{
		printf("ERROR\n");
		return (1);
	}
	printf("JOINED STR: %s\n", res);
	free(res);
	return 0;
}
*/
