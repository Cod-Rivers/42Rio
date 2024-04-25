/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 22:25:50 by rivda-si          #+#    #+#             */
/*   Updated: 2024/04/23 22:25:52 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (!big && !len)
		return (0);
	if (little[0] == '\0' || little == big)
		return ((char *)big);
	while ((big[i] != '\0'))
	{
		c = 0;
		while ((big[i + c] == little[c]) && (i + c) < len)
		{
			if (big[i + c] == '\0' && little[c] == '\0')
				return ((char *)&big[i]);
			c++;
		}
		if (little[c] == '\0')
			return ((char *)(&big[i]));
		i++;
	}
	return (0);
}
