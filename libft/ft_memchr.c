/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:13:50 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 14:13:56 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (void *)s;
	while (i < n)
	{
		if (temp[i] == c)
			return ((void *)(temp + i));
		i++;
	}
	return (NULL);
}

/*int main() {
  char str[] = "Hello, world!";
  char *found;

  found = ft_memchr(str, 'o', ft_strlen(str));
  if (found) {
    printf("O caractere 'o' foi encontrado em %p.\n", found);
  } else {
    printf("O caractere 'o' não foi encontrado.\n");
  }

  return 0;
}*/
