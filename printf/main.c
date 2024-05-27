/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <amzaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:07:35 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/27 19:07:35 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>



static int    couneterint_unsigned(unsigned int nb)
{
    int    count;

    count = 1;
    if (nb < 0)
    {
        nb = -nb;
        count++;
    }
    while ((nb / 10) != 0)
    {
        nb = nb / 10;
        count++;
    }
    return (count);
}

static void    ft_putunsigned(unsigned int n)
{
    char c;
    if (n >= 10)
        ft_putunsigned(n / 10);
    c = (n % 10) + 48;
    write(1, &c, 1);
}

int print_number_unsigned(unsigned int n)
{
    ft_putunsigned(n);
    return (couneterint_unsigned(n));
}



int    ft_lenex(unsigned    int num)
{
    int    len;

    len = 0;
    while (num != 0)
    {
        len++;
        num = num / 16;
    }
    return (len);
}


void    wr_hex_number_x(unsigned int c, int xx)
{
    if (c >= 10)
        c = c + xx;
    else if (c <= 10)
        c = c + 48;
    write (1, &c, 1);
}

void    ft_hex_putnbr_xmajormin(unsigned int n,int format)
{
    if (n >= 16)
        ft_hex_putnbr_xmajormin(n / 16,format);
    wr_hex_number_x(n % 16,format);
}

int    printhex(unsigned int n,int majormin,int adresse_ou_non)
{
    if(adresse_ou_non == 0)
    {
        ft_hex_putnbr_xmajormin(n,majormin);
        return ft_lenex(n);
    }
    else if(adresse_ou_non == 1)
    {
        if(n == 0)
        {
            write(1,"(nil)",5);
            return (5);
        }
        ft_hex_putnbr_xmajormin(n,majormin);
        return ft_lenex(n + 2);
    }
}

int    secondloop(va_list *args,const char    src)
{
    int    len;

    len = 0;
    if (src == 'c')
        len += write(1, va_arg(*args, char), 1);
    /*else if (src == 's')
        len += ft_putstr(va_arg(*args, char *));
    else if (src == 'p')
        len +=printhex(va_arg(*args, int),87,1);
    else if (src == 'd' || src == 'i')
        len +=print_number(va_arg(*args, int));*/
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

int    ft_printf(const char *src, ...)
{
    va_list    args;
    int    i;
    int    len;
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


int main() {
    char c = 'c';
    int n = ft_printf("%camine",c);
}