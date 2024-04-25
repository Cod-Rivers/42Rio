/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 22:25:56 by rivda-si          #+#    #+#             */
/*   Updated: 2024/04/23 22:25:58 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*a;

	if (c > 127)
		c %= 256;
	a = (unsigned char *)&s[ft_strlen(s)];
	while (*s++)
	{
		if (*a == (unsigned char)c)
			return ((char *)(a));
		a--;
	}
	if (*a == c)
		return ((char *)(a));
	return (NULL);
}
