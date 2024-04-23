/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:22:29 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/23 07:52:38 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void * ft_memcpy( void * destination, const void * source, size_t size )
{
	size_t i;

	/*if (!destination && !source)
		return destination;*/
	i = 0;
	while(i < size)
	{
		((char *) destination)[i] = ((char *) source)[i];
		i++;
	}
	return destination;
}


#include <stdio.h>
#include <stdlib.h>

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    int *copy;
    int length = sizeof( int ) * 5;
    printf("la valeur de lemgth : %d\n",length);
    /* Memory allocation and copy */
    copy = (int *) malloc(length * sizeof(int));
    memcpy( copy, array, 20 );
        
    for(  length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );
        
    free( copy );
    
    return EXIT_SUCCESS;
}
