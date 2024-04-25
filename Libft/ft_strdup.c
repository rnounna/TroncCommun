/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:34:44 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/25 14:53:19 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = ft_strlenn(src);
	dest = malloc(sizeof * dest * (i + 1));
	ft_strlcpy(dest, src,i + 1);
	return (dest);
}

int	main()
{
	char *dest;
	dest = ft_strdup("amine est bete");
	printf("%s",dest);
}
