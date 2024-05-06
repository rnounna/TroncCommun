/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:29:33 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/06 18:16:12 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <stddef.h>

int		ft_strncmp( const char *first, const char *second, size_t length );
char	*ft_strdup(char *src);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(const char *dest, const char *src, size_t size);
int		ft_isalpha(int n);
int		ft_isdigit(int n);
int		ft_isalnum(int c);
int		ft_isascii(int n);
int		ft_isprint(int n);
void	*ft_memset(void *pointer, int value, size_t count);
void	*ft_memset(void *pointer, int value, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy( void *destination, const void *source, size_t size);
void	*ft_memmove( void *dest, const void *source, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *string, int searchedChar);
void	*ft_memchr( const void *memoryBlock, int searchedChar, size_t size);
int		ft_memcmp( const void *pointer1, const void *pointer2, size_t size);
char	*ft_strnstr(const char *src, const char *to_find, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc( size_t elementCount, size_t elementSize);
char	*ft_substr(char const *source, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strrchr(const char *string, int search);

#endif
