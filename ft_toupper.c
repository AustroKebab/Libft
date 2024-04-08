/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbozan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:19:48 by mbozan            #+#    #+#             */
/*   Updated: 2024/04/08 19:30:02 by mbozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    int n;
    char c;

    n = 1;
    while (ac >= 2)
    {
        c = av[n][0];
        printf("%c", ft_toupper(c));
        n++;
        ac--;
    }
    printf("\n");
    return (0);
}
*/
