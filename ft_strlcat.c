/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:36:06 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/22 19:05:35 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat( char *dst, const char *src, size_t size )
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (dst[0] == '\0' && src[0] == '\0')
		return (0);
	while (dst[i])
		i++;
	while (src[j])
		dst[i++] = src[j++];
//	dst[i++] = '\0';
	return (size + i);
}
