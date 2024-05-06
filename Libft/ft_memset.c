/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:48:23 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/06 10:30:47 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((char *) pointer)[i] = (char)value;
		i++;
	}
	return (pointer);
}
/*
int main() {

    int array [] = { 1, 2, 3, 4, 5 };
    int size = sizeof( int ) * 5;

    int length;

    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

   //Reset the memory bloc 
    ft_memset( array, 0 ,size);

    // Display the new values 
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    return 0;
}
*/
