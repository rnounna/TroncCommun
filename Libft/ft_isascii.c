/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:19:03 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/22 10:21:13 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int n)
{
	if (n > 32 && n < 127)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	printf("la valeur final est : %d\n", isascii(av[1][0]));
	printf("la valeur finale de la fonction ft : %d", ft_isascii(av[1][0]));
}*/
