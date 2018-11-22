/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:42:06 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/22 18:39:34 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dest1;
	unsigned char *src1; 
	char temp[n];
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	dest1 = (unsigned char *)dest;
	src1= (unsigned char *)src;
	while (i++ < n)
		temp[i] = src1[i];
	while (j++ < n)
		dest1[j] = temp[j];
	free(temp);
	return (dest1);
}
