/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:47:37 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/22 10:48:12 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int	ft_isalpha(int n)
{
	if ((n > 64 && n < 91) || (n > 96 && n < 123))
		return (1);
	else
		return (0);
}


int	main(int ac, char **av)
{
	(void) ac;
	printf("la valeur final est : %d\n", isalpha(av[1][0]));
	printf("la valeur finale de la fonction ft : %d", ft_isalpha(av[1][0]));
}
