/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:55:49 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/08 16:29:01 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
*/
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
