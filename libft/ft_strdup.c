/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:53:12 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/14 15:15:52 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*temp;
	int		len;
	int		i;

	len = ft_strlen(s);
	i = 0;
	temp = (char *) malloc ((sizeof(char)) * len + 1);
	if	(!temp)
		return (NULL);
	while(i < len)
	{
		temp[i] = s[i];
		i++;
	}
	temp[i]=0;
	return temp;
}

