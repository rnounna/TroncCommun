/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:59:26 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/06 18:42:11 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *source, unsigned int start, size_t len)
{
	char	*dest;
	size_t	lensource;
	int		i;

	i = 0;
	if (!source)
		return (NULL);
	lensource = ft_strlen(source);
	if (start + len > lensource)
	{
		if (start < lensource)
			len = ft_strlen(source + start);
		else
			len = 0;
	}
	dest = malloc((len) + 1);
	if (!dest)
		return (NULL);
	while (len--)
		dest[i++] = source[start++];
	dest[i] = 0;
	return (dest);
}
