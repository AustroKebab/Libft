/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:05:40 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 19:44:17 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (last);
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
			printf("LAST POSITION: %ld\n", ptr - str);
		else
			printf("NOT FOUND");
	}
	else
		printf("ERROR");
	return (0);
}
*/
