/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:56:35 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/05 16:57:59 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlcpy(char *dest, char *src, size_t size)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Love, baby";
	char d[69];

	ft_strcpy(d, str);
	printf("%s", d);

	return (0);
}
*/
