/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:54:09 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/26 15:54:40 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int n)
{
	if (n > 32 && n < 127)
		return (1);
	else
		return (0);
}


int	main(int ac, char **av)
{
	printf("la valeur final est : %d\n", isascii(av[1][0]));
	printf("la valeur finale de la fonction ft : %d", ft_isascii(av[1][0]));
}
