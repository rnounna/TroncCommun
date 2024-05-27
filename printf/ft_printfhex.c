/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <amzaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:08:43 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/27 15:08:43 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        write(1,"0x",2);
        ft_hex_putnbr_xmajormin(n,majormin);
        return (ft_lenex(n) + 2);
    }
    return (ft_lenex(n));
}
