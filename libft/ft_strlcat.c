/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:30:21 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/27 12:48:00 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	all;
	size_t	size;

	if (dstsize == 0)
		return (0);
	c = ft_strlen(dst);
	if (dstsize < c)
		size = dstsize;
	else
		size = c; 	
	i = 0;
	
	all = size + ft_strlen(src);
	while (src[i] != '\0' && c < (dstsize - 1))
	{
		dst [c] = src [i];
		i++;
		c++;
	}
	dst [c] = '\0';
	return (all);
}
/*int	main(void)
{
	int	i;
	char	s1[9] = "eu me ";
	const char	s2[9] = "amo!";
	size_t len = ft_strlcat (s1,s2,ft_strlen(s1));
	
	printf("%zu",len);

}*/	
