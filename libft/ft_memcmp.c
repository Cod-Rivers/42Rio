/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:03:11 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/27 14:29:49 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cs1;
	const unsigned char	*cs2;

	cs1 = (const unsigned char *) s1;
	cs2 = (const unsigned char *) s2;
	while (n && *cs1 == *cs2)
	{
		cs1++;
		cs2++;
		n--;
	}
	if (n)
	{
		return (*cs1 - *cs2);
	}
	else
		return (0);
}

/*int main() {
  char str1[] = "Hello, world!";
  char str2[] = "Hello, world!";

		  int res = ft_memcmp(str1, str2, ft_strlen(str1) + 1);

  if (res == 0) {
    printf("As duas strings são iguais.\n");
  } else if (res < 0) {
    printf("A primeira string é menor que a segunda.\n");
  } else {
    printf("A primeira string é maior que a segunda.\n");
  }

  return 0;
}*/
