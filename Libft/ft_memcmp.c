/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 02:27:21 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/03 20:07:36 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
	size_t  i;

	i = 0;
        if(size == 0)
                return (0);
        while (((unsigned char *)pointer1)[i] == ((unsigned char *)pointer2)[i] && (size - 1) >  i && ((unsigned char *)pointer1)[i] != 0)
                i++;
        return (((unsigned char *)pointer1)[i] - ((unsigned char *)pointer2)[i]);
}
/*
int main() {
    // Déclaration et initialisation de deux blocs de mémoire
    char block1[] = "Hello";
    char block2[] = "World";
    
    // Comparaison des blocs de mémoire
    int result = memcmp(block1, block2, 5); // Compare les 5 premiers octets

    // Affichage du résultat de la comparaison
    if (result < 0)
        printf("Le bloc de mémoire 'block1' est inférieur au bloc de mémoire 'block2'.\n");
    else if (result > 0)
        printf("Le bloc de mémoire 'block1' est supérieur au bloc de mémoire 'block2'.\n");
    else
        printf("Les blocs de mémoire 'block1' et 'block2' sont égaux.\n");

    return 0;
}*/
