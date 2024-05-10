/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:01:36 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/10 02:18:39 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temps;

	while (lst != NULL && del)
	{
		temps = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = temps;
	}
	*lst = NULL;
}
