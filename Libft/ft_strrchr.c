/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:10:41 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/28 20:21:01 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, char search)
{
	int	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == search)
			return ((char *)(string + i));
		i--;
	}
	return (NULL);
}

/*
int main() {
    const char *phrase = "Bonjour, commient ça va aujourd'hui ?";
    char *test = ft_strrchr(phrase,'i');
    printf("%s\n%s",phrase,test);
    return 0;
}
*/
