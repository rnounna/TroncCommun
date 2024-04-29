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
	size_t	compteur;
        j = 0;
        i = 0;
	compteur = 0;
        if (to_find[0] == '\0')
                return ((char*)str);
	if (len == 0)
		return NULL;
        while (str[i] && compteur < len)
        {
                if(str[j + i] && to_find[j] && str[i + j] == to_find[j])
                {
                        j++;
			compteur++;
                }
                if (compteur <= len && to_find[j] == '\0')
                {
			return ((char *)str + i);
                }
                j = 0;
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
