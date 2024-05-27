/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdisplay.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <amzaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:37:21 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/27 18:37:21 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

int ft_putchar(char c)
{
    return (write(1,&c,1));
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
    return (i);
}