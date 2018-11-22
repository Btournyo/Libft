/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:39:40 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/22 18:05:33 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strdup(char *src)
{
	char *copy;
	int size;
	int i;

	size =  ft_strlen(src);
	copy = "NULL";
	i = 0;
	if (copy != malloc(sizeof(*copy) * (size + 1)))
		return (0);
	if (src[0] == '\0')
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
