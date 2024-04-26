/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:53:34 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/26 18:57:33 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = ft_strlen(src);
	dest = malloc(sizeof * dest * (i + 1));
	ft_strlcpy(dest, src, i + 1);
	return (dest);
}
/*
int	main()
{
	char *dest;
	char *src = "amine exst bete";
	dest = ft_strdup(src);
	printf("%s",dest);
}*/
