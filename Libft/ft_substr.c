/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:59:26 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/30 14:43:53 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *source, unsigned int start,size_t len)
{
	size_t	i;
	char	*dest;
	size_t	j;

	//dest = (char *) malloc( sizeof(*source) * (len + 1));
	i = 0;
	j = 0;
	dest = "";
	if (!source)
		return (dest);
	if (start > ft_strlen(source))
		return(dest);
	if (len > start + ft_strlen(source))
		len = ft_strlen(source);
	dest = (char *)malloc(sizeof(*source) * (len + 1));
	while (j < len)
	{
		dest[i] = source[start];
		i++;
		start++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main()
{
	char *src = "alala";
	char *dest;
	dest = ft_substr("This is an example string", 12, 25);
	//dest = malloc(20);
	//dest  = ft_strlcpy(dest,src,5);
	printf("%lu",sizeof(*src));
}*/
