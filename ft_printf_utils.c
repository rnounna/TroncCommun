/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <amzaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 02:48:03 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/24 02:48:03 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int    countnumber(int    n)
{
    int    i;

    i = 1;
    while((n  % 10) == 0)
    {
        i++;
        n = n / 10;
    }
    return (i);
}

int    ft_putstr(char *s)
{
	int	i;

	if(!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(1,&s[i],1);
		i++;
	}
	return(i);
}

int    wr_number(char c)
{
	c = c + 48;
	write(1, &c, 1);
	return (1);
}
int    wr_hex_number_x(char c)
{
    if(c >=10)
      c = c + 87;
    else if(c <= 10)
      c = c + 48;
    write(1, &c, 1);
	return (1);
}

int    wr_hex_number_X(char c)
{
    if(c >=10)
      c = c + 55;
    else if(c <= 10)
      c = c + 48;
    write(1, &c, 1);
	return (1);
}

