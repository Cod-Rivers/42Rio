/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:22:57 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 14:23:00 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
