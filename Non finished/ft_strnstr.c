/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:55:49 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/08 15:41:54 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	t;

	t = 0;
	while (s[t] != '\0')
		t++;
	return (t);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]) && i < n - 1)
		i++;
	if (n == 0 || (s1[i] == s2[i]))
		return (0);
	else
		return (s1[i] - s2[i]);
}

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
