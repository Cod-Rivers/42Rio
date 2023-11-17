/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:20:30 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 16:20:35 by rivda-si         ###   ########.fr       */
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
