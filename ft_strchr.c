/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:07:22 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 19:14:36 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c < 0 || c > 255)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	const char	*str;
	int	character;
	const char	*ptr;

	str = av[1];
	character = av[2][0];
	ptr = ft_strchr(str, character);
	if (ac == 3)
	{
		if (ptr != NULL)
			printf("FIRST POSITION: %ld\n", ptr - str);
		else
			printf("NOT FOUND");
	}
	else
		printf("ERROR");
	return (0);
}
*/
