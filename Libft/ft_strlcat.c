/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:54:42 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/04 18:38:30 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(const char *dest,const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		((char*)dest)[j] = ((char *)src)[i];
		i++;
		j++;
	}
	((char *)dest)[j] = '\0';
	return (dlen + slen);
}
/*
int main (void)
{
	char src[] = "Born to code";
	char dest [100] = "1337 42";
	printf("%i \n", ft_strlcat(dest, src,8 ));
	printf("%s \n", dest);
}
*/
