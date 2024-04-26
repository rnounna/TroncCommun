/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:54:28 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/26 15:10:59 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t size)
{
	const char		*a;
	const char		*b;
	size_t			i;
	size_t			len;

	a = (const char *)source;
	b = (const char *)dest;
	len = size;
	i = 0;
	if (a < b)
	{
		while (++i < len)
		{
			len--;
			((char *)dest)[len] = ((char *)source)[len];
		}
	}
	ft_memcpy(dest, source, size);
	return (dest);
}
/*
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
*/
