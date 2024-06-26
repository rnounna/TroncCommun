/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:51:14 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/10 01:09:11 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while ((string[i] != (char)searchedChar) && (string[i] != '\0'))
	{
		i++;
	}
	if (string[i] == (char)searchedChar)
		return ((char *)string + i);
	return (NULL);
}
