/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:07 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/25 14:18:19 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr( const char * string, int searchedChar )
{
	int	i;
	int	j;

	j = ft_strlen(string);
	i = 0;
	while(string[i])
	{
		if (string[i] == searchedChar)
			return (&string[i]);
		i++;
	}
	return (&string[i]);
}

int	main()
{
	char	*tweet = "Th@is is my mention";
	char *dest = ft_strchr(tweet,'i');
	printf("%s\n",tweet);
	printf("%s",dest);
}
