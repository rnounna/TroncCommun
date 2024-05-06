/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:37:13 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/06 10:27:41 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((const char *)memoryBlock)[i] == (unsigned char)searchedChar)
			return ((void *)memoryBlock + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, world!";
    char ch = 'o';
    size_t length = strlen(str);

    // Recherche de la première occurrence du caractère 'o' dans la chaîne str
    const char *result = memchr(str, ch, 8);
    printf("%s\n",(void*)result);
    if (result != NULL) {
        printf("Le caractère '%c' a été trouvé 
	à l'index %ld dans la chaîne.\n", ch, result - str);
    } else {
        printf("Le caractère '%c' n'a pas été trouvé dans la chaîne.\n", ch);
    }

    return 0;
}*/
