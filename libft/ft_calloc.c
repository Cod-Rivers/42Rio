/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:38:03 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/27 16:14:40 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *temp;
	
	temp = (void*)malloc(nmemb * size);
	if(!temp)
		return (NULL);
	ft_bzero(temp,nmemb*size);
	return (temp);
}
int main() 
{
  int *my_array;

  // Aloca memória para um array de 10 elementos do tipo int.
  my_array = (int *)calloc(10, sizeof(int));

  // Verifica se a memória foi alocada com sucesso.
  if (my_array == NULL) {
    printf("Erro: não foi possível alocar memória.\n");
    return 1;
  }

  // Inicializa os elementos do array com o valor 0.
  for (int i = 0; i < 10; i++) {
    my_array[i] = 0;
	printf("%i",my_array[i]);
  }

  // Libera a memória alocada para o array.
  free(my_array);

  return 0;
}
