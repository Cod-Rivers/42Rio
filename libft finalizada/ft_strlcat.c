/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:20:14 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/23 01:18:26 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	j = len_dst;
	i = 0;
	if (size > 0 && len_dst < size - 1)
	{
		while (len_dst + i < size - 1 && src[i] != '\0')
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	if (len_dst > size)
	{
		len_dst = size;
	}
	return (len_dst + len_src);
}
