/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:41:07 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/22 19:48:55 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0')
			return (0);
		a++;
	}
	return ((unsigned int)(s1[a] - s2[a]));
}
