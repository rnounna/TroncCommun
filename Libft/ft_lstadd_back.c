/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:25:19 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/10 04:44:31 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if(!*lst)
	{
		*lst = new;
		return ;
	}
	t_list *temps;

	temps = *lst;
	while (temps->next != NULL)
	{
		temps = temps->next;
	}
	temps->next = new;
}
