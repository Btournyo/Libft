/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:16:14 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/27 16:02:23 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *  ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *str;

	i = 0;
	if (str = (char *)malloc(size_of(char) * ft_strlen(s) + 1) == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = ft_striteri(s, f(i), s[i]));
		i++;
	}
	return (str);
}