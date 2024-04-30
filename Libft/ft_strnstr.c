/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 03:28:35 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/30 10:46:18 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!str || !to_find)
		return (NULL);
	if (ft_strlen(to_find) == 0)
		return ((char *) str);
	while (str[i] && i <= len)
	{
		j = 0;
		while(str[i] == to_find[j] && i <= len)
		{
			i++;
			j++;
		}
		if (j >= ft_strlen(to_find))
			return ((char *)str + (i - j));
		i -= j;
		i++;
	}
	return (NULL);
}
/*
int main() 
{
    //const char *haystack = "(";
    //const char *needle = "Charly";
    //size_t len = ;
    char *result = ft_strnstr("aaabcabcd", "abcd", 9); //returned "abcd"; //returned "(null)")
    char *result1 = ft_strnstr("Trouverez vous Charly dans cette phrase?", "Charly", 41); //returned "Charly dans cette phrase?"
    printf("strnstr(%s) returned ",result1
    return 0;
}
*/
