/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:05:44 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/22 10:10:01 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int n)
{
	if (n > 47 && n < 58)
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
*/

int	main(int ac, char **av)
{
	printf("la valeur final est : %d\n", isdigit(av[1][0]));
	printf("la valeur finale de la fonction ft : %d", ft_isdigit(av[1][0]));
}
