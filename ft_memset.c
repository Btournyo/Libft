/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:39:23 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/19 18:33:59 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char *s1 = s;
	unsigned char c1 = c;

//	if (s != (*char)(malloc((n + 1) * sizeof(*s))))
//		return (0);
	while (n != 0)
	{
		*s1 = c1;
		s1++;
		n--;
	}
	return (s);
}
