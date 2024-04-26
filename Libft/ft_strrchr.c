/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:00:33 by amzaidi           #+#    #+#             */
/*   Updated: 2024/04/26 19:07:32 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_strrchr(const char*s,int c)
{
	int	i;

	i = ft_strlen();
}

int main() {
    char *phrase = "Bonjour, comment ça va aujourd'hui ?";
    char *last_a = strrchr(phrase, 'a');
    char *test;
    strrchr()
    printf()
    if (last_a != NULL) {
        printf("La dernière lettre 'a' se trouve à la position : %ld\n", last_a - phrase);
    } else {
        printf("Pas de lettre 'a' trouvée.\n");
    }
    
    return 0;
}
