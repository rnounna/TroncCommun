/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <amzaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 03:20:30 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/24 03:20:30 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int    ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n == 2147483647)
	{
		write(1, "2147483647", 10);
		return ;
	}
	else if (n >= 10)
		ft_putnbr(n / 10);
	wr_number(n % 10);
	return(countnumber(n));
}

int    ft_unsigned_putnbr(unsigned int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	wr_number(n % 10);
	return(countnumber(n));
}

int ft_hex_putnbr_x(int n)
{
	if (n >= 10)
		ft_hex_putnbr_x(n / 16);
	wr_hex_number_x(n % 16);
	return(countnumber(n));
}

int ft_hex_putnbr_X(int n)
{
	if (n >= 10)
		ft_hex_putnbr_X(n / 16 );
	wr_hex_number_X(n % 16);
	return(countnumber(n));
}

int	display_adress(int n)
{
	write(1,"0x",2);
	if (n >= 10)
		ft_hex_putnbr_X(n / 16);
	wr_hex_number_X(n % 16);
	return(countnumber(n));
}