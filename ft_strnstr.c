/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:55:49 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:34:55 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlelen;

	littlelen = ft_strlen(little);
	if (littlelen == 0)
		return ((char *)big);
	while (*big != '\0' && len >= littlelen)
	{
		if (ft_strncmp(big, little, littlelen) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	const char	*input;
	const char	*tofind;
	const char	*ptr;

	input = av[1];
	tofind = av[2];
	ptr = ft_strnstr(input, tofind, sizeof(input));
	if (ac == 3)
	{
		if (ptr != NULL)
			printf("FIRST POSITION: %ld\n", ptr - input);
		else
			printf("NOT FOUND");
	}
	else
		printf("ERROR");
	return (0);
}
*/
