/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: austrokebab <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 14:34:11 by austrokebab       #+#    #+#             */
/*   Updated: 2024/04/08 14:38:07 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strchr(const char *str, int character)
{
	while (*str != '\0')
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	const char	*str;
	int	character;
	const char	*ptr;

	str = av[1];
	character = av[2][0];
	ptr = ft_strchr(str, character);
	if (ac == 3)
	{
		if (ptr != NULL)
			printf("FIRST POSITION: %ld\n", ptr - str);
		else
			printf("NOT FOUND");
	}
	else
		printf("ERROR");
	return (0);
}
*/
