/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:44:21 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/23 10:57:15 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
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

#include <stdio.h>
#include <string.h>

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
