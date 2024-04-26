/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:50:02 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/26 19:08:11 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (src[j])
		j++;
	while (src[i] && i < size - 1)
	{
		if (size > i)
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

int main() {

    const char *src = "amine";
    char *dest;
    size_t size;

    size = ft_strlen(src) + 1;
    dest = (char *) malloc(size);
    ft_strlcpy(dest, src,size);
    printf("your name is : %s",dest);
}
