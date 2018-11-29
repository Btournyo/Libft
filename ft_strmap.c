/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 10:24:13 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/27 15:13:38 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	size_t i;
	char *str;

	i = 0;
	if (str = (char *)malloc(sizeof(*str) * ft_strlen(s) + 1) == NULL)
		return (NULL);
	while (s[i])
		str[i] = f(s[i++]);
	return (str);
}