/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:29:58 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/22 12:51:29 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset( void * pointer, int value, size_t count )
{
	size_t	i;
	i = 0;

	while (i < count)
	{
		((char *) pointer)[i] = (unsigned char)value;
		i++;
	}
	return pointer;	
}

#include <stdio.h>
#include <stdlib.h>

int main() {

    char array [] = { 'a', 'b', 'c', 'd', 'e' };
    int size = sizeof( int ) * 2;

    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc */
    ft_memset( array, 'a', size);

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );

    return 0;
}
