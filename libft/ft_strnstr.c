/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:46:36 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/18 06:53:32 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!len || !*little)
	{
		return ((char *) big);
	}
	while (i < len && big[i] != '\0')
	{
		if (!ft_memcmp(big + i, little, ft_strlen(little)))
		{
			if (i + ft_strlen(little) <= len)
			{
				return ((char *) big + i);
			}
		}
		i++;
	}
	return (NULL);
}
/*int main() 
{
  char *big = "oh no not the empty string !";
  char *little = "";
  char *found;

  found = ft_strnstr(big, little,ft_strlen(big));
  if (found) {
    printf("Found: %s\n", found);
  } else {
    printf("Not found\n");
  }

  return 0;
}*/
