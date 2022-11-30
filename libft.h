/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:26:46 by fbesson           #+#    #+#             */
/*   Updated: 2022/11/30 18:13:04 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H 
# define LIBFT_H

# include <ctype.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <string.h> 

//int fonction

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *memoire1, const void *memoire2, size_t n);
int		ft_atoi(const char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);

//others

char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *memoire, int value, size_t n);
void	*ft_memcpy(void	*dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *dest, int value, size_t n);
void	*ft_calloc(size_t nelements, size_t bytes);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *str, int fd);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);

//Fonction de la partie 2.

char	*ft_substr(const char *str, unsigned int start, size_t n);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_itoa(int n);
char	**ft_split(char const *str, char c);
char	*ft_strmapi(char const *s, char (*fonction)(unsigned int, char));
void	ft_striteri(char *s, void (*fonction)(unsigned int, char*));

#endif