/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:09:35 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:31:43 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "ab";

	printf("%s", ft_str_is_alpha(str) ? "yes" : "nope");

	return (0);
}
*/
