/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:49:57 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/03 19:36:56 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *string,char c)
{
	int	i;
	int	words_number;
	int	inside_word;

	inside_word = 0;
	words_number = 0;
	i = 0;
	while(string[i])
	{
		if(string[i]!= c && !inside_word)
		{
			inside_word = 1;
			words_number++;
		}
		else if(inside_word && string[i] == c)
			inside_word = 0;
		i++;
	}
	return words_number;
}

/*Fonction split(chaîne, délimiteur)
    Créer une liste vide de sous-chaînes
    Créer une sous-chaîne temporaire vide

    Pour chaque caractère dans la chaîne
        Si le caractère n'est pas un délimiteur
            Ajouter le caractère à la sous-chaîne temporaire
        Sinon
            Ajouter la sous-chaîne temporaire à la liste de sous-chaînes
            Réinitialiser la sous-chaîne temporaire à une chaîne vide

    Ajouter la dernière sous-chaîne temporaire à la liste de sous-chaînes

    Retourner la liste de sous-chaînes
Fin de la fonction
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


char **ft_split(char const *s, char c)
{
	char	**split;
	char	*tempon;
	int	i;
	int	o;
	int	nombre_mots;

	nombre_mots = count_words(*s,c);
	i = 0;
	while (nombre_mots)
	{
		while(s[i])
		{
			if()
			{
				s[i] = tempon[o];
				i++;
				o++;
			}
			i++;
		}
		nombre_mots;
	}
}
