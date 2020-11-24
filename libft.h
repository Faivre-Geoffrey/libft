/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geoffrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 08:49:30 by geoffrey          #+#    #+#             */
/*   Updated: 2020/11/24 11:22:30 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

void	ft_bzero(void *s, size_t n);
int	ft_isalpha (char c);
int	ft_isdigit (char c);
int	ft_isalnum (char c);
int	ft_isascii (char c);
int	ft_isprint (char c);
void	ft_putchar(char c);
void	*memset (void *s, int c, size_t n);
void	*ft_memchr(const void *src, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strlen(char* str);
int	toupper(int c);
int	tolower(int c);
char	*strchr(const char *str, int c);
char	*strrchr(const char *str, int c)
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
char	*ft_strnstr(const char *src, const char *chrc, size_t n);
int	ft_atoi(const char *str);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);



#endif
