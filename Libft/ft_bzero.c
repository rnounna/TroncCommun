/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:42:53 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/28 20:23:13 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = s;
	while(i < n)
	{
		str[i++] = '\0';
		//i++;
	}
	//return s;
}
/*
int main() {

    char array [] = { 'a', 'b', 'c', 'd', 'e' };
    int size = sizeof( int ) * 2;

    int length;

    for( length=0; length<5; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );

    ft_bzero( array, size);
    for( length=0; length<5; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );
    return 0;
}
*/
