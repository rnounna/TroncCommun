/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:35:02 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/22 11:58:27 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char *str;
	size_t i;

	i = 0;
	str = s;
	while(i < n)
	{
		str[i++] = '\0';
		//i++;
	}
	//return s;
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
    ft_bzero( array, size);

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );

    return 0;
}

