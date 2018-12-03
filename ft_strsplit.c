/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 10:20:12 by btournyo          #+#    #+#             */
/*   Updated: 2018/12/03 09:56:10 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check_sign(char a, char c)
{
	if (a == c)
		return (1);
	return (0);
}

int	count_words(char *str, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	if (check_sign(str[0], c) == 1)
		words++;
	while (str[i])
	{
		if (check_sign(str[i], c) == 1  && check_sign(str[i + 1], c) == 0)
			words++;
		i++;
	}
	return (words);
}

int	size_words(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && check_sign(str[i], c) == 0)
		i++;
	return (i);
}

char ** ft_strsplit(char const *s, char c)
{
	int 	i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(char *) * count_words((char *)s, c) + 1))== NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && check_sign((char)s[i], c) == 0)
		{
			if ((tab[j] = malloc(sizeof(char) * size_words((char *)s + i, c) + 1)) == NULL)
				return (NULL);
			ft_strcpy(tab[j], (char *)&s[i]);
			i = i + size_words((char *)&s[i], c);
			j++;
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	(void)ac;
	while (*av[i])
	{
		ft_putstr((const char *)ft_strsplit(&av[1][i], '*'));
		i++;
	}
	return (0);
}
