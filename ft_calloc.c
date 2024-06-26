/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:01:41 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/25 16:21:17 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr != 0)
		ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*ptr;
	int	n;
	int	i;

	n = 69;
	ptr = (int *)ft_calloc(n, sizeof(int));
	if (ptr == 0)
		printf("ERROR: NO ALLOC");
	else
	{
		printf("SUCCESS");
		i = 0;
		for (i = 0; i < n; ++i)
			ptr[i] = i + 1;
		printf("Elements: ");
		i = 0;
		for (i = 0; i < n; ++i)
			printf("%d, ", ptr[i]);
	}
	return (0);
}
*/
