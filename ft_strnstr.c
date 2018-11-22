/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:07:58 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/22 16:41:40 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1 , const char *s2 , size_t len)
{
	while (len != 0)
	{
		ft_strstr((char *)s1, (char *)s2);
		len--;
	}
	return (0);
}
