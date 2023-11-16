/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:53:41 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/27 13:57:23 by rivda-si         ###   ########.fr       */
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
