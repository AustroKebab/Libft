/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:45:08 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/18 15:15:45 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static size_t	setcheck(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	size_t	i;
	char	*trim;

	if (s1 == 0 || set == 0)
		return (0);
	front = 0;
	back = ft_strlen(s1);
	while (s1[front] && setcheck(s1[front], set))
		front++;
	while (back > front && setcheck(s1[back - 1], set))
		back--;
	trim = (char *)malloc(back - front + 1);
	if (trim == 0)
		return (0);
	i = 0;
	while (i < back - front)
	{
		trim[i] = s1[front + i];
		i++;
	}
	trim[back - front] = '\0';
	return (trim);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("OG: %s\n", argv[1]);
		printf("SET: %s\n", argv[2]);
		printf("RESULT: %s\n", ft_strtrim(argv[1], argv[2]));
		return (0);
	}
	else
		return (1);
}
*/
