/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:29:33 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/26 18:52:34 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

char		*ft_strdup(char *src);
size_t	ft_strlen(const char *s);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_isalpha(int n);
int		ft_isdigit(int n);
int		ft_isalnum(int c);
int		ft_isascii(int n);
int		ft_isprint(int n);
void		*ft_memset(void *pointer, int value, size_t count);
void		*ft_memset(void *pointer, int value, size_t count);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy( void *destination, const void *source, size_t size);
void		*ft_memmove( void *dest, const void *source, size_t size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char		*ft_strchr(const char *string, int searchedChar);

#endif
