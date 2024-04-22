/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:54:08 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 19:19:09 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*res;

	i = 0;
	if (!s)
		return (0);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	res = str;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>

char	ft_toupper(unsigned int index, char c)
{
	(void)index;
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	else
		return c;
}
char	ft_tolower(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z') 
		return c - 'A' + 'a';
	else
		return c;
}
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char *input = av[1];
		char *result = ft_strmapi(input, ft_toupper);
		if (result == NULL)
		{
			printf("ERROR.\n");
			return (1);
		}
		printf("OG: %s\n", input);
		printf("MAP: %s\n", result);
		free(result);
	}
	return 0;
}
*/
