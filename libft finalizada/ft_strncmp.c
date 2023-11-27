/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:22:59 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 16:23:02 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*int	main(void)
{
	int	i;
	char	s1[9] = "aaaba";
	char	s2[9] = "abaaa";
	
	i = ft_strncmp (s1,s2, 3);
	if(i > 0)
	{
		printf("s2 é menor que s1");
	}
	else if (i < 0)
	{
		printf("s1 é menor que s2");
	}
	else
	{
		printf("s1 é igual a s2");
	}
	
	printf("i = %d", i);
}*/
