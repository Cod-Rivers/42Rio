/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:11:36 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/18 19:21:56 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp1;
	char	*temp2;

	i = 0;
	temp1 = (char *) src;
	temp2 = dest;
	if (!dest && !src)
		return (dest);
	else if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			temp2[i - 1] = temp1[i - 1];
			i--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*int	main()
{
	char str1[] = "Rivernon";
	char str2[] = "Risdsfsdni";
	

  // Copia a string str1 para a string str2
	ft_memmove(str2, str1, strlen(str1));
	printf("%s\n", str2);

	return 0;
}*/
