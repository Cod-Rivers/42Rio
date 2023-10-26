/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:00:58 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/26 15:46:21 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;	
	unsigned char	*big1;
	unsigned char	*little1;

	i = 0;
	j = 0;
	big1 = (unsigned char *)big;
	little1 = (unsigned char *)little;
	while (big1[i] != '\0' && i < len)
	{
		if (little1[j] == big1[i])
		{
			while (little1[j] == big1[i] && little1[j] != '\0')
			{
				j++;
				i++;
			}			
			if (j == ft_strlen(little1))
				return ((char *) &big1[i]);
			return ('\0');
		}
		i++;
	}
}
/*int main() 
{
  char *big = "Hello, world!";
  char *little = "world";
  char *found;

  found = ft_strnstr(big, little,ft_strlen(big));
  if (found) {
    printf("Found: %s\n", found);
  } else {
    printf("Not found\n");
  }

  return 0;
}*/
