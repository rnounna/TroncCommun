/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:40:48 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/04 13:06:02 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_calloc( size_t count, size_t size )
{
	void *retour;
	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	retour = (void*)malloc(size * count);
	if(!retour)
		return (NULL);
	ft_bzero(retour,count * size);
	return (retour);
}
