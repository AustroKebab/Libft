/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:04:20 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/19 17:20:04 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include "libft.h"*/
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	t;

	t = 0;
	while (s[t] != '\0')
		t++;
	return (t);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	ac = 2;
	printf("%i", ft_strlen(av[1]));
	return (0);
}
*/
