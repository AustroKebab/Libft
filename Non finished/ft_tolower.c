/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:01:51 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/05 15:04:40 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (*str);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int	n;

	n = 1;

	while (ac >= 2)
	{
		ft_toupper(av[n]);
		printf("%s", av[n]);
		n++;
		ac--;
	}
	return (0);
}
*/
