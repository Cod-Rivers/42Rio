/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:23:13 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 15:23:21 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
