/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 02:27:21 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/04 12:30:44 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
	size_t  i;
	const unsigned char	*pointer11;
	const unsigned char	*pointer22;

	pointer11 = (const unsigned char *)pointer1;
	pointer22 = (const unsigned char *)pointer2;
	i = 0;
        while (i < size)
	{
		if (pointer11[i] != pointer22[i])
			return (pointer11[i] - pointer22[i]);
                i++;
	}
        return (0);
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
