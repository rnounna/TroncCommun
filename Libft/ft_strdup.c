/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:53:34 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/10 01:22:25 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = ft_strlen(src);
	dest = malloc(sizeof * dest * (i + 1));
	ft_strlcpy(dest, src, i + 1);
	return (dest);
}
