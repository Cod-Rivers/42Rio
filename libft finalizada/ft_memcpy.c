/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:14:34 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 14:15:43 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*temp2;

	i = 0;
	temp = (unsigned char *) src;
	temp2 = (unsigned char *)dest;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		temp2[i] = temp[i];
		i++;
	}
	return (dest);
}
/*int main() 
{
  char str1[] = "Esta é uma string.";
  char str2[10];

  // Copia a string str1 para a string str2
  ft_memcpy(str2, str1, strlen(str1));
  printf("%s\n", str2);

  return 0;
}*/
