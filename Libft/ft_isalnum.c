/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:50:28 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/28 20:24:46 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) \
			|| (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	printf("la valeur final est : %d\n", isalnum(5));
	printf("la valeur finale de la fonction ft : %d", ft_isalnum(5));
}
*/
