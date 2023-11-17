/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:46:36 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 15:45:30 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_verify(const char *big, const char *little)
{
	if (ft_strlen(little) == 0)
		return ((char *)big);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	ft_verify(big, little);
	if (len == 0)
		return (0);
	while (big[i] != '\0' && i < len)
	{
		if (little[j] == big[i])
		{
			while ((j + i) < len && big[j + i] && little[j] != '\0')
			{
				if (big[j + i] == little[j])
					j++;
				else
					break ;
			}
			if (little[j] == '\0')
				return ((char *) big + i);
			j = 0;
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
