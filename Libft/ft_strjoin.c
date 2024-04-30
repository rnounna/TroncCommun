/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:52:38 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/30 16:40:24 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int	i;
	int	j;

	i = 0;
	j = 0;
	//size_t i = 50;
	int lens1 = ft_strlen(s1);
	int lens2 = ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (lens1 + lens2)+1);
	if(!dest)
		return NULL;
	while(s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char *dest = ft_strjoin("amine   ","zaidi");
	printf("%s",dest);
}*/
