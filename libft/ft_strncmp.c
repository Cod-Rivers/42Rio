/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:57:46 by rivda-si          #+#    #+#             */
/*   Updated: 2023/08/11 19:37:43 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
int	main(void)
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
}
