/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 09:29:08 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/27 09:42:44 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memalloc(size_t size)
{
	void *temp;
	if (temp = (void *)malloc(sizeof(void *) * size)== NULL)
		return (NULL);
	ft_bzero(temp, size);
	return (temp);
}