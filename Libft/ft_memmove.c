/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:54:28 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/06 10:29:26 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t size)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	if (!dest && !source)
		return (NULL);
	if (dest > source)
	{
		while (size--)
			((char *)dest)[size] = ((char *)source)[size];
	}
	else
		ft_memcpy(dest, source, size);
	return (dest);
}
/*
void    *ft_memmove(void *dest, const void *source, size_t size)
{
    char *dst = (char *)dest;
    const char *src = (const char *)source;

    if (src < dst)
    {
        // Si la destination est après le début de la source,        
	// // copiez de droite à gauche pour éviter de remplacer des donn
        for (size_t i = size; i != 0; --i)
        {
            dst[i - 1] = src[i - 1];
        }
    }
    else
    {
        // Sinon, copiez de gauche à droite normalement.
        for (size_t i = 0; i < size; ++i)
        {
            dst[i] = src[i];
        }
    }

    return dest;
}
*/
/*
int	main() 
{
	char src[20] = "abcdef";
	char dest[20] = "abcdef";
	memmove(src+2,src,4);
	//const char *test = str + strlen(str);
	printf("avant memmove : %s\n",src);
	ft_memmove(dest+2,dest,4);
	printf("Apres ft_memmove : %s\n" ,src);	
	return 0;
}
*/
