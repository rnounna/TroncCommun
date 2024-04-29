/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 00:49:35 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/29 01:26:12 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp( const char * first, const char * second, size_t length )
{
	size_t	i;

	i = 0;
	if(length == 0)
		return (0);
	while (first[i] == second[i] && (length - 1) >  i && first[i] != 0)
		i++;
	return (first[i] - second[i]);
}


/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "";
    char str2[] = "";
    
    int result =ft_strncmp(str1, str2, 20); // Compare seulement les 5 premiers caractères
    
    if (result < 0)
        printf("Les 5 premiers caractères de str1 sont inférieurs aux 5 premiers caractères de str2\n");
    else if (result > 0)
        printf("Les 5 premiers caractères de str1 sont supérieurs aux 5 premiers caractères de str2\n");
    else
        printf("Les 5 premiers caractères de str1 sont égaux aux 5 premiers caractères de str2\n");

    return 0;
}*/
