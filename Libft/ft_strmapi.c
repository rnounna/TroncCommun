/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:47:11 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/06 18:41:42 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	dest = ft_strdup((char *)s);
	while (dest[i])
	{
		dest[i] = f(i, dest[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
