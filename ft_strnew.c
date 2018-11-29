/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 09:49:15 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/27 09:58:37 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnew(size_t size)
{
	char *str;
	size_t i;

	*str = NULL;
	i = 0;
	if (str = (char *)malloc(sizeof(*str) * size)) == NULL)
		return (NULL)
	while (i < size)
		str[i++] = '\0';
	str[i] = '\0';
	return (str);
}