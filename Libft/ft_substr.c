/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:59:26 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/04 18:09:31 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *source, unsigned int start,size_t len)
{
	char	*dest;
	if(!source)
		return NULL;
	size_t	lensource = ft_strlen(source);
	if (start + len > lensource)
	{
		if (start < lensource)
			len = ft_strlen(source + start);
		else
			len = 0;
	}
	if(start > lensource)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return dest;
	}
	dest = malloc(sizeof(char) * (len + 1));
	if(!dest)
		return NULL;
	ft_strlcpy(dest,source + start,len + 1);
	dest[len] = '\0';
	return dest;
	
}
/*
int	main()
{
	char *src = "alala";
	char *dest;
	dest = ft_substr("This is an example string", 12, 2);
	//dest = malloc(20);
	//dest  = ft_strlcpy(dest,src,5);
	printf("%s",dest);
}*/
