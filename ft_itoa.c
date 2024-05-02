/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:17:31 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/26 10:10:48 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	issign(int n)
{
	int	res;

	if (n < 0)
		res = -1;
	else
		res = 1;
	return (res);
}

static int	ilen(int n)
{
	int	len;
	int	sign;

	len = 0;
	sign = issign(n);
	if (n == 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	if (sign == -1)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	int				sign;
	char			*str;
	unsigned int	num;

	sign = issign(n);
	len = ilen(n);
	num = n;
	str = (char *)ft_calloc((len + 1), sizeof(char));
	len--;
	if (!str)
		return (0);
	if (sign == -1)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (((sign == -1 && len > 0) || (len >= 0 && sign == 1)))
	{
		str[len] = '0' + (num % 10);
		num /= 10;
		len--;
	}
	return (str);
}

/*
int	main(int argc, char **argv)
{
 	if (argc == 2)
 	{
 		int	num;

 		num = ft_atoi(argv[1]);
 		char *n = ft_itoa(num);
 		printf("%s\n", n);
 		free(n);
 		return (0);
 	}
}
*/
