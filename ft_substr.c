/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:01:28 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/16 17:51:41 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	sublen;
	size_t	i;

	slen = ft_strlen(s);
	if (s == 0 || start >= slen)
		return (0);
	if (len > (slen - start))
		sublen = slen - start;
	else
		sublen = len;
	sub = (char *)malloc((sublen + 1) * sizeof(char));
	if (sub == 0)
		return (0);
	i = 0;
	while (i < sublen)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[sublen] = '\0';
	return (sub);
}
