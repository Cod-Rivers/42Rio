/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:36:10 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/14 14:27:05 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	len;

	len = (ft_strlen(s2) + ft_strlen(s1));
	new = (char *) malloc ((sizeof(char)) * len + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		new[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*int main (void)
{
	const char *s1[] = {"rio"};
	const char *s2[] = {" rt"};
	char *str3;

	str3 = ft_strjoin(*s1, *s2);
	printf ("%s", str3);
}*/
