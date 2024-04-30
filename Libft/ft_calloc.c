/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:40:48 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/30 11:56:11 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_calloc( size_t count, size_t size )
{
	void *retour;
	retour = malloc(size * count);
	if(!retour)
		return (NULL);
	ft_bzero(retour, size * count);
	return (retour);
}
