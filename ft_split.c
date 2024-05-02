/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:04:43 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/26 12:23:56 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	argcount(char const *str, char deli)
{
	size_t				arc;
	size_t				i;
	unsigned char		sep;
	const unsigned char	*string;

	if (!ft_strlen(str))
		return (0);
	arc = 0;
	i = 0;
	sep = (unsigned char)deli;
	string = (const unsigned char *)str;
	while (string[i])
	{
		if ((string[i + 1] == sep || !(string[i + 1])) && string[i] != sep)
			arc++;
		i++;
	}
	return (arc);
}

static char	*subwrite(char *substr, const char *start, size_t substrlen)
{
	size_t	i;

	i = 0;
	while (i < substrlen)
	{
		substr[i] = start[i];
		i++;
	}
	return (substr);
}

static char	*exsubstr(const char *str, char deli, size_t *index)
{
	size_t		substrlen;
	char		*substr;
	const char	*start;

	start = str + *index;
	substrlen = 0;
	while (*start == deli)
	{
		start++;
		(*index)++;
	}
	while (start[substrlen] != '\0' && start[substrlen] != deli)
		substrlen++;
	substr = (char *)ft_calloc((substrlen + 1), sizeof(char));
	if (substr == 0)
		return (0);
	substr = subwrite(substr, start, substrlen);
	*index += substrlen;
	while (str[*index] == deli)
		(*index)++;
	return (substr);
}

static void	freemem(char **res, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	count;
	size_t	i;
	size_t	index;

	if (s == 0)
		return (0);
	count = argcount(s, c);
	res = (char **)ft_calloc(count + 1, sizeof(char *));
	if (res == 0)
		return (0);
	i = 0;
	index = 0;
	while (i < count)
	{
		res[i] = exsubstr(s, c, &index);
		if (res[i] == 0)
		{
			freemem(res, i);
			return (0);
		}
		i++;
	}
	res[count] = 0;
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*s = " Herst  Hawara   LIEBE!  ";
	char	**result = ft_split(s, ' ');

	if (result == NULL)
	{
		printf("ERROR\n");
		return (1);
	}
	printf("Result:\n");
	for (int i = 0; result[i] != NULL; i++)
		printf("%s\n", result[i]);
	for (int i = 0; result[i] != NULL; i++)
		free(result[i]);
	free(result);
	return (0);
}
*/
