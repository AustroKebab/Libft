/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:04:43 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 19:07:45 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	argcount(char const *str, char deli)
{
	int	arc;
	int	i;

	arc = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != deli && (i == 0 || str[i - 1] == deli))
			arc++;
		i++;
	}
	return (arc);
}

/*extract and length*/
static char	*exsubstr(const char *str, char deli, size_t *index)
{
	size_t		i;
	size_t		substrlen;
	char		*substr;
	const char	*start;

	start = str + *index;
	substrlen = 0;
	while (start[substrlen] != '\0' && start[substrlen] != deli)
		substrlen++;
	substr = (char *)ft_calloc((substrlen + 1), sizeof(char));
	if (substr == 0)
		return (0);
	i = 0;
	while (i < substrlen)
	{
		substr[i] = start[i];
		i++;
	}
	substr[substrlen] = '\0';
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
	char	*s = "Herst Hawara Hello World Fuck Shit";
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
