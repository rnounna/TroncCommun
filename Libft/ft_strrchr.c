/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:10:41 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/06 18:17:03 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int search)
{
	int		i;
	char	*str;

	str = (char *)string;
	i = ft_strlen(string);
	while (i >= 0)
	{
		if (str[i] == (char)search)
			return (str + i);
		i--;
	}
	return (NULL);
}
