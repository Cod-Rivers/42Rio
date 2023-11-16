/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:13:16 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/26 15:50:53 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	len;
	
	i = 0;
	len = ft_strlen(src);
	
	if (dst_size == 0)
	{
		return (len);
	}
	while (src[i] != '\0' && i < dst_size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*int main()
{
  char dst[19];
  const char *src = "Esta é uma string.";
// Copia a string de origem para a string de destino,
// garantindo que a string de destino seja terminada em nulo,
// mesmo se a string de origem for maior que a string de destino.
  size_t len = ft_strlcpy(dst, src, sizeof(dst));

  // Imprime a string de destino.
  printf("%p\n" "%s", dst, len);

  return (0);

}*/
