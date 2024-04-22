/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:18:17 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 17:02:21 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	if (n == i || (s1[i] == '\0' && s2[i] == '\0'))
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	argc = 4;

	char	*str1 = argv[1];
	char	*str2 = argv[2];
	unsigned int	n = atoi(argv[3]);
	int	r = ft_strncmp(str1, str2, n);

	if (r == 0)
	{
		printf("%s and %s are equal", str1, str2);
	}
	else if (r < 0)
	{
		printf("%s is less than %s", str1, str2);
	}
	else
	{
		printf("%s is greater than %s", str1, str2);
	}
	return (0);
}
*/
