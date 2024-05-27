/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <amzaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:25:50 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/27 18:50:09 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	secondloop(va_list *args,const char	src)
{
	int	len;

	len = 0;
	if (src == 'c')
		len += write(1, va_arg(*args, int), 1);
	else if (src == 's')
		len += ft_putstr(va_arg(*args, char *));
	else if (src == 'p')
		len +=printhex(va_arg(*args, int),87,1);
	else if (src == 'd' || src == 'i')
		len +=print_number(va_arg(*args, int));
	else if (src == 'u')
		len += print_number_unsigned(va_arg(*args, unsigned int));
	else if (src == 'x')
		len +=printhex(va_arg(*args, unsigned int),87,0);
	else if (src == 'X')
		len +=printhex(va_arg(*args, unsigned int),55,0);
	else if (src == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *src, ...)
{
	va_list	args;
	int	i;
	int	len;
	len = 0;
	i = 0;
	va_start(args, src);
	while (src[i])
	{
		if (src[i] == '%')
		{
			len += secondloop(args,src[i + 1]);
			i++;
		}
		else
			len += write(1, &(src[i]), 1);
		i++;
	}
	va_end(args);
	return (len);
}
