/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:01:28 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/26 14:42:08 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	sublen;
	size_t	i;

	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (!s)
		return (0);
	if (len > (slen - start))
		sublen = slen - start;
	else
		sublen = len;
	sub = (char *)ft_calloc(sublen + 1, sizeof(char));
	if (!sub)
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
