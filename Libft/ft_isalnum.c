/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:11:12 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/22 10:18:16 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) \
			|| (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	printf("la valeur final est : %d\n", isalnum(av[1][0]));
	printf("la valeur finale de la fonction ft : %d", ft_isalnum(av[1][0]));
}
*/
