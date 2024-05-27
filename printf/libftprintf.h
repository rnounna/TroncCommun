/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:21:25 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/24 15:25:27 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int ft_print_number(int n);
int ft_printhex(unsigned int n,int majormin,int adresse_ou_non);
int ft_printf(const char *src, ...);
int ft_print_number_unsigned(unsigned int n);
int ft_putstr(char *str);
int ft_putchar(char str);

#endif
