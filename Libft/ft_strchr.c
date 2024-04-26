/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:51:14 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/26 16:47:49 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;
	char *retour;
	//retour = ft_strdup(string[j]);
	i = 0;
	//retour = ft_strdup((char*)string);
	while (string[i++])
	{
		if (string[i] == searchedChar)
			break;
	}
	retour = ft_strdup((char*)string + i);
	return (retour);
}

int	main()
{
	char	*tweet = "Th@is is my mention";
	char *dest = ft_strchr(tweet,'i');
	printf("%s\n",tweet);
	printf("%s",dest);
}
