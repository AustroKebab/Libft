/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:56:35 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/08 19:24:52 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sl;

	i = 0;
	sl = 0;
	while (src[sl] != '\0' && size > 0)
		sl++;
	while (*src != '\0' && size > 1)
	{
		*dst++ = *src++;
		size--;
		i++;
	}
	if (size > 0)
		*dst = 0;
	return (sl);
}
