/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 11:18:21 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/28 13:03:20 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strtrim(char const *s)
{
	char const *str;
	size_t i;

	i = 0;
	if (str = (char const *)malloc(sizeof(char) * ft_strlen(s) + 1) == NULL)
		return (NULL);
	while (*s)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	}
}