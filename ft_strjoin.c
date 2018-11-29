/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 11:11:14 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/28 11:17:29 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if (str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1) == NULL)
		return (NULL);
	str = ft_strlcat(s1, s2, ft_strlen(s1));
	return (str);
}