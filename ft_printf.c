/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:25:50 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/24 15:49:35 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *src, ...)
{
	va_list	args;
	int		i;

	if (!src)
		return (-1);
	i = 0;
	va_start(args, src);
	while (src[i])
	{
		if (src[i] == '%')
		{
			
			i++;
			secondloop(args,src[i]);
			i++;
		}
		write(1, &(src[i]), 1);
	}
	va_end(args);
	return (i);
}
