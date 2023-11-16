/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:52:26 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/19 17:30:28 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	while (*string != (char)c)
	{
		if (!*string)
			return (0);
		string++;
	}
	return ((char *)string);
}
/*int main() {
  char string[] = "Esta é uma string.";
  char c = 'a';

  // Localiza a primeira ocorrência do caractere 'a' na string
  char *p =strchr(string, c);

  // Verifica se o caractere foi encontrado
  if (p != NULL) {
    // Imprime o ponteiro para o caractere
			printf("%p\n", p);
  } else {
    // Imprime que o caractere não foi encontrado
    printf("O caractere não foi encontrado.\n");
  }

  return 0;
}*/
