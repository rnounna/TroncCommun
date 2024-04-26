/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:50:50 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/26 15:57:14 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int n)
{
	if (n > 31 && n < 127)
		return (1);
	else
		return (0);
}

int	main()
{
	printf("la valeur final est : %d\n", isprint(5));
	printf("la valeur finale de la fonction ft : %d", ft_isprint(5));
}
