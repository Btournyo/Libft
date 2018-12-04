/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 10:20:12 by btournyo          #+#    #+#             */
/*   Updated: 2018/12/04 10:53:11 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy(char *dest, char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	count_words(const char *str, char c)
{
	size_t i;
	size_t words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (!str[i])
			break ;
		words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}

static size_t split_words(const char *s, size_t n, char **tab, char c)
{
	size_t i;
	size_t start;
	size_t end;

	i = 0;
	start = 0;
	while (i < n && s[start])
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		if (!(tab[i] = malloc(end - start + 1)))
			return (0);
		ft_cpy(tab[i], (char *)s + start, end - start);
		start = end + 1;
		i++;
	}
	return (1);
}

char ** ft_strsplit(char const *s, char c)
{
	size_t 	nb;
	char	**tab;

	if (!s)
		return (NULL);
	nb = count_words(s, c);
	if (!nb)
	{
		if (!(tab = malloc(sizeof(*tab))))
			return (NULL);
		tab[0] = NULL;
		return (tab);
	}
	if (!(tab = malloc(sizeof(*tab) * (nb + 1))))
		return (NULL);
	if (!split_words(s, nb, tab, c))
		return (NULL);
	tab[nb] = 0;
	return (tab);
}
