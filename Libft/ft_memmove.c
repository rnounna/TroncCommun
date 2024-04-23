/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:42:35 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/23 10:27:55 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void * ft_memmove( void * dest, const void * source, size_t size )
{
	const char *a = (const char*)source;
	const char *b = (const char*)dest;
	int	i;
	int len;

	len = size;
	i = 0;
	if (a < b)
	{
		printf("a < b\n");
		while(0 < len)
		{
			len--;
			((char *) dest) [len] = ((char *) source) [len];
		}
	}
	memcpy(dest,source,size);
	return dest;
}

#define ELEMENT_COUNT 10

int	main() 
{
	char str[20] = "abcdef";
	//strcpy(str2,str);
	const char *test = str + strlen(str);
	printf("avant ft_memmove : %s\n",str);
	ft_memmove(str+2,str,4);
	printf("Apres ft_memmove : %s\n" ,str);	
	return 0;
}

