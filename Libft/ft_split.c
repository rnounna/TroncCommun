/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:49:57 by amzaidi           #+#    #+#             */
/*   Updated: 2024/05/03 19:07:37 by amzaidi          ###   ########.fr       */
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

static int      tochar(char *s,char c, int start) // compte jusquau char c specifier ;
{
        int     i;
        int     j = 0;
        i = 0;
        while (s[i] == c)
          i++;
        while (s[i] != c)
        {
          j++;
          i++;
	  if(s[i] == '\0')
	  	break;
        }
        return j + start;
}

static int      nextword(char *s,char c) // compte jusquau char c specifier ;
{
        int     i;
        int     j = 0;
        i = 0;
        while (s[i] == c)
          i++;
        return i;
}



/*
char **ft_split(char const *s, char c)
{
	char	**retour;
	int	i;
	int	wordnumber;

	wordnumber= count_word(s,c);
	i = 0;
	retour = (char **)malloc * (sizeof(char*) * wordnumber);
	while(wordnumber)
	{
		i = tochar()
		wordnumber--;
	}

}
*/

int	main()
{
	char **split;
	int	start = 0;
	int	end = 0;
	char c = '-';
	int	inword = 0;
	char *str = "i-----AmineAmine-A4545mine-Amine";
	int wordnumber = count_words(str,c);
	while(wordnumber)
	{
		inword = 1;
		while(str[i] && inword)
		{
			while (str[inword] != c)
			{
				// on copie
			}
		}
		while(str[i] && !inword)
		{
			
		}
		wordnumber--;
        }
}
