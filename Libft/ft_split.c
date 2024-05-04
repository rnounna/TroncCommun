/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:49:57 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/04 17:04:33 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *string, char c)
{
	int	i;
	int	words_number;
	int	inside_word;

	inside_word = 0;
	words_number = 0;
	i = 0;
	while (string[i])
	{
		if (string[i] != c && !inside_word)
		{
			inside_word = 1;
			words_number++;
		}
		else if (inside_word && string[i] == c)
			inside_word = 0;
		i++;
	}
	return (words_number);
}

static	char	*ft_split_split(const char *src, int start, int end)
{
	char	*dest;
	int		i;
	int		size;

	size = end - start;
	i = 0;
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	while (i < size)
	{
		dest[i++] = src[start++];
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		start;
	int		end;
	int		nombre_mots;

	i = 0;
	start = 0;
	nombre_mots = count_words(s, c);
	split = malloc(sizeof(char *) * (nombre_mots + 1));
	if (!split)
		return (NULL);
	while (i < nombre_mots)
	{
		while (s[start] == c && s[start])
			start++;
		end = start + 1;
		while (s[end] != c && s[end])
			end++;
		split[i] = ft_split_split(s, start, end);
		start = end + 1;
		i++;
	}
	split[i] = NULL;
	return (split);
}
