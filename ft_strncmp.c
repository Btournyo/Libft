/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:42:30 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/22 19:48:58 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned char *S1;
	unsigned char *S2;
	
	i = 0;
	S1 = (unsigned char *)s1;
	S2 = (unsigned char *)s2;
	while (S1[i] == S2[i] && S1[i] && S2[i] && i < n)
		i++;
	return (S1[i] - S2[i]);
}
