/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 03:28:35 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/29 05:08:08 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char    *ft_strnstr(const char *str, const char *to_find, size_t len)
{
        int     i;
        int     j;

        j = 0;
        i = 0;
        if (!str || !to_find)
        	return (NULL);
    	if (ft_strlen(to_find) == 0)
        	return ((char *) str);
        while (str[i] && i + j <= len)
        {
                j = 0;
                while(str[i+j] && str[i++] == to_find[j++] && i <= len);
                if (j == ft_strlen(to_find) + 1)
                        return ((char *)str + (i - j));
                i -= j;
                i++;
        }
        return (NULL);
}
/*
int main() 
{
    const char *haystack = "Trouverez vous Charly dans cette phrase?";
    const char *needle = "Charly";
    //size_t len = ;
    char *result = ft_strnstr("Trouverez vous Charly dans cette phrase?", "Charly", 18);
    printf("strnstr(%s) returned ",result);
    return 0;
}*/
