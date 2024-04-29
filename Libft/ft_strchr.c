/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:51:14 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/29 00:47:22 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	if(!string)
		return (NULL);
	i = 0;
	while (string[i])
	{
		if (string[i] == searchedChar)
			return ((char *)string + i);
		i++;
	}
	if(string[i] == searchedChar)
		return ((char*)string + i);
	return (0);
}
/*
int main(void)
{
        char    const *test = "a b c";
        char    *dest = ft_strchr(test, 0);
        if (dest == NULL)
        {
                printf("strchr returned NULL\n");
                return 1;
        }
        printf("strchr(\"%s\", '\\0') returned %s\n", test, dest);
}
*/
