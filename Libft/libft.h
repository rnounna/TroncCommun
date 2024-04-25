/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:29:33 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/25 14:44:32 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
//#include <stdLib.h>

char    *ft_strdup(char *src);
char    *ft_strcpy(char *dest, char *src);
int	ft_strlen(const char *word);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

#endif
