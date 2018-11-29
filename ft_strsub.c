/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:49:17 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/28 12:53:46 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char const *str;
	size_t i;
	size_t j;

	if (str = malloc(sizeof(char) * len + 1) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (*s == NULL)
		return (NULL);
	while (s[i] != s[start])
		i++;
	while (s[i] && len != 0)
	{
		str[j] = s[i];
		i++;
		j++;
		len--;
	}
	return (str);
}

/*while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
str[i] = '\0';
return (str); */