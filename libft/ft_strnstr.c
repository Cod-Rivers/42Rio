/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:46:36 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/01 13:49:04 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if (j == ft_strlen(little))
				return ((char *) &big1[i]);
		}
		i++;
	}
	return (NULL);
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
