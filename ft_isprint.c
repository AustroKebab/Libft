/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:59:43 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/22 14:32:22 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "abcd";

	printf("%s", ft_str_is_printable(str) ? "yes" : "nope");
	return (0);
}
*/
