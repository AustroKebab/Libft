/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:05:40 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/08 17:05:47 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	while (*s != '\0')
	{
		if (*s == c)
			last = str;
		str++;
	}
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
