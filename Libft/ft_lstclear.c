/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:01:36 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/10 04:53:12 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temps;
	
	temps = *lst;
	while (*lst != NULL && del)
	{
		temps = temps->next;
		del(temps->content);
		free(temps);
	}
	temps = NULL;
}
