/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:40:53 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/22 19:17:31 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dest1;
	const unsigned char *src1;
	unsigned int i;
	int size_s;
	int size_d;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	size_s = ft_strlen((char *)src1);
	size_d = ft_strlen((char *)dest1);
	dest1 = (unsigned char *)(malloc((size_s + size_d) * sizeof(dest[0])));
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	dest1[i] = '\0';
	return ((void *)dest1);
}
