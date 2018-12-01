/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:03:38 by btournyo          #+#    #+#             */
/*   Updated: 2018/12/01 15:14:39 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		sizenbr(int a)
{
	int nbr;

	nbr = 0;
	if (a == 0)
		return (1);
	if (a < 0)
	{
		a = -a;
		nbr++;
	}
	while (a > 0)
	{
		a = a / 10;
		nbr++;
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	long 	size;

	i = 0;
	size = (long)sizenbr(n);
	if ((str = (char *)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[i++] = '-';
	}
	str[size] = '\0';
	size--;
	while (n > 0)
	{
		str[size] = n % 10 + '0';
		n = n / 10;
		size--;
	}
	return (str);
}
