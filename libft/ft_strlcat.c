/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:30:21 by rivda-si          #+#    #+#             */
/*   Updated: 2023/08/10 11:04:32 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest [c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest [c] = src [i];
		i++;
		c++;
	}
	dest [c] = '\0';
	return (dest);
}
/*int	main(void)
{
	int	i;
	char	s1[9] = "eu me ";
	char	s2[9] = "amo!";

	
	printf(ft_strncat (s1,s2, 2));

}*/	
