/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:47:20 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/02 19:05:50 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char    *rendu;
        size_t  end;
        size_t  start;
	if (!s1)
                return (NULL);
	if (s1 && set == NULL)
		return (ft_strdup((char*)s1));
	end = ft_strlen(s1);
	start = 0;
        while (ft_strchr(set,s1[start]) && start <= end)
          start++;
	if(start > end)
                return (ft_strdup((char*)s1 + end + 1));
        while (ft_strchr(set,s1[end]) && start < end)
          end--;
        rendu = (char *)malloc (sizeof(char) * (end - start + 2));
        ft_strlcpy(rendu,s1 + start,end - start + 2);
        return rendu;
}

/*
int     main()
{
        printf("%s",ft_strtrim("abcdba", "acb"));
}*/