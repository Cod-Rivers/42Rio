/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:36:48 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/19 19:02:21 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char * ft_strrchr (const char * string , int c ) 
{
	int		i;
	int		len;
	int		j;
	char	*temp;
	
	temp = (char *)string;
	len = ft_strlen(temp);
	i = 0;
	j = len;
	while (j-1 > i)
	{
		if (temp[j] == c)
		{
			return (&temp[j]);
		}
		j--;
	}
	return (NULL);
}
int main() {
  char string[] = "Esta é uma string.";
  char c = 'a';
	char *ptr;
	ptr = string;
	int	len = ft_strlen(ptr);
  // Localiza a primeira ocorrência do caractere 'a' na string
  char *p =ft_strrchr(string, c);

  // Verifica se o caractere foi encontrado
  if (p != NULL) {
    // Imprime o ponteiro para o caractere
			printf("%s\n", p);
  } else {
    // Imprime que o caractere não foi encontrado
    printf("O caractere não foi encontrado.\n");
  }
	printf("%d",len);
  return 0;
}
