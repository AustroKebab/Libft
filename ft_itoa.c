/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:17:31 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/18 17:51:44 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "../ft_calloc.c"
#include "../ft_atoi.c"

static int	isneg(int nn)
{
	int	res;

	if (nn < 0)
		res = -1;
	else
		res = 1;
	return (res);
}

static int	ilen(int nlen)
{
	size_t	len;

	len = 0;
	while (0 != nlen / 10)
	{
		nlen /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	int		neg;
	char	*str;

	len = ilen(n);
	str = (char *)ft_calloc(len, sizeof(char));
	if (!str)
		return (0);
	neg = isneg(n);
	if (neg == -1)
		*str++ = '-';
	str += len;
	*str-- = '\0';
	while (n != 0)
	{
		*str-- = '0' + (neg * (n % 10));
		n /= 10;
	}
	return (str + 1);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	num;

		num = ft_atoi(argv[1]);
		printf("The number given: %d\n", num);
		printf("String result: %s\n", ft_itoa(num));
		return (0);
	}
	else
		return (1);
}
*/
