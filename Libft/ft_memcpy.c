/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:53:08 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/29 01:52:18 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((char *) destination)[i] = ((char *) source)[i];
		i++;
	}
	return (destination);
}

/*
int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    int *copy;
    int length = sizeof( int ) * 5;
    printf("la valeur de lemgth : %d\n",length);
    copy = (int *) malloc(length * sizeof(int));
    memcpy( copy, array, 20 );

    for(  length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );

    free( copy );

    return EXIT_SUCCESS;
}*/
