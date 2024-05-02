/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:02:41 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/26 14:09:54 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	slen;

	slen = ft_strlen(s);
	dst = ft_calloc((slen + 1), sizeof(char));
	if (!dst)
		return (0);
	ft_strlcpy(dst, s, slen + 1);
	return (dst);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char *dup;

	dup = ft_strdup(av[1]);
	if (ac == 2)
	{
		if (dup == 0)
		{
			printf("ERROR");
			return (1);
		}
		printf("OG: %s/n", av[1]);
		printf("DUP: %s/n", dup);
		free(dup);
	}
	return (0);
}
*/
