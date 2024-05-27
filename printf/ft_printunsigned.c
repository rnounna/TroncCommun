/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <amzaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:42:28 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/27 16:42:28 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	couneterint_unsigned(unsigned int nb)
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

static void	ft_putunsigned(unsigned int n)
{
	char c;
	if (n >= 10)
		ft_putunsigned(n / 10);
	c = (n % 10) + 48;
	write(1, &c, 1);
}

int print_number_unsigned(unsigned int n)
{
    ft_putunsigned(n);
    return (couneterint_unsigned(n));
}