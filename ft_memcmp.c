/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:40:16 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/22 18:47:33 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t  n)
{ 
	const unsigned char *str1;
	const unsigned char *str2;
	
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n > 0 && str1)
	{
		if (*str1 != *str2)
			return (str1 - str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
