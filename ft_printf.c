/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <amzaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 02:49:07 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/24 02:49:07 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	int *seconloop(va_list	args,const char	*src,int i)
{
	int	j;
	char formats[] = {'d','i','u','s','x','X','P'};
	int (*suivi[8])(void *) = {(void *)ft_putnbr,(void *)ft_putnbr,(void *)ft_unsigned_putnbr,(void *)ft_putstr,\
	(void *)ft_putstr,(void *)ft_hex_putnbr_x,(void *)ft_hex_putnbr_X,(void *)display_adress};
	j = 0;
	while(formats[j])
	{
        if (formats[j] == src[i]) 
			suivi[j](va_arg(args, void *));
		else if(src[i] == 'c')
			write(1,va_arg(args, void *),1);
		j++;
	}
}

int ft_printf(const char *src, ...)
{
	if(!src)
		return (-1);
    va_list args;
    int i;
    i = -1;
    va_start(args, src);
	while (src[++i])
	{
		if (src[i] == '%')
		{
			i++;
			seconloop(args,src,i);
			i++;
		}
		write(1,&(src[i]),1);
	}
    va_end(args);
    return (i);
}