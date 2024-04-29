/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:47:47 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/28 20:25:08 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	if (n > 47 && n < 58)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	printf("la valeur final est : %d\n", isdigit(47));
	printf("la valeur finale de la fonction ft : %d", ft_isdigit(47));
}*/
