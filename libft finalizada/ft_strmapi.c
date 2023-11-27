/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:30:06 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 15:27:34 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*point;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	point = (char *)malloc(sizeof(char) * (i + 1));
	if (!point)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		point[i] = (*f)(i, s[i]);
		i++;
	}
	point[i] = '\0';
	return (point);
}
