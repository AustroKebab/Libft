/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:19:48 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/05 14:49:10 by mbozan           ###   ########.fr       */
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
		if (c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
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
