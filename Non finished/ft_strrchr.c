/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: austrokebab <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:50:18 by austrokebab       #+#    #+#             */
/*   Updated: 2024/04/08 14:39:08 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strchr(const char *str, int character)
{
	const char	*last;

	while (*str != '\0')
	{
		if (*str == character)
			last = str;
		str++;
	}
	return (last);
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
			printf("LAST POSITION: %ld\n", ptr - str);
		else
			printf("NOT FOUND");
	}
	else
		printf("ERROR");
	return (0);
}
*/
