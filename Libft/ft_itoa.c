/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:10:24 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/04 18:59:42 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	couneterInt(int nb)
{
	int	count = 1;
	if(nb < 0)
		nb = -nb;
	while((nb / 10) != 0)
	{
		nb = nb / 10;
		count ++;
	}
	return	count;
}

void	wr_number(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

char	*ft_putnbr(int nb)
{
	char	*rendu;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return rendu;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == 2147483647)
	{
		write(1, "2147483647", 10);
		return rendu;
	}
	else if (nb >= 10)
		ft_putnbr(nb / 10);
	wr_number(rendu % 10);
	return rendu;
}

char *ft_itoa(int n)
{
	char	rendu = malloc(sizeof(char)) * (couneterInt(n) + 1);
			
	rendu = ft_putnbr(n);
}

int	main()
{
	ft_itoa(10);	
}
