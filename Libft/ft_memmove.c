/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:54:28 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/10 00:56:57 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t size)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	if (!dest && !source)
		return (NULL);
	if (dest > source)
	{
		while (size--)
			((char *)dest)[size] = ((char *)source)[size];
	}
	else
		ft_memcpy(dest, source, size);
	return (dest);
}
