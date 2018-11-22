/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:48:21 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/22 15:49:10 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int 	ft_isalnum(int c);
int 	ft_isalpha(int c);
int 	ft_isascii(int c);
int 	ft_isdigit(int c);
int 	ft_isprint(int c);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memchr(const void *s,int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t  n);
void    *ft_memcpy(void *dest, const void *src,size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char    *ft_strcat(char *dest, char *src);
char	*ft_strchr(const char *s, int c);
int     ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
size_t	ft_strlcat( char *dst, const char *src, size_t size);
int     ft_strlen(char *str);
char    *ft_strncat(char *dest, char *src, int nb);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy( char *dest, char *src, unsigned int n);
char    *ft_strnstr(const char *s1 , const char *s2 , size_t len);
char	*ft_strrchr(const char *s, int c);
char    *ft_strstr(char *str, char *to_find);
int		ft_tolower(int c);
int		ft_toupper(int c);
