/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <amzaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:12:33 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/27 16:12:33 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	couneterint(int nb)
{
	int	count;

	count = 1;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while ((nb / 10) != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static void    ft_putnbr(int n)
{
	char c;
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
	if (n >= 10)
		ft_putnbr(n / 10);
    c = (n % 10) + 48;
	write(1, &c, 1);
}

int print_number(int n)
{
    ft_putnbr(n);
    return (couneterint(n));
}