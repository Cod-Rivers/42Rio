/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:11:01 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/14 13:49:54 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	o;
	char	*temp;
	size_t	lennew;

	i = 0;
	o = 0;
	j = 0;
	lennew = (ft_strlen (s1) - ft_strlen(set));
	temp = (char *) malloc(sizeof(char) * lennew + 1);
	if (!temp)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		while (s1[i] == set[j])
		{
			i++;
		}
		while (s1[i] != set[j])
		{
			temp[o++] = s1[i++];
			j++;
		}
		temp [i] = '\0';
	}
	return (temp);
}
/*int main (void)
{
	const char *str = {"euqueroagua"};
	const char *str2 = {"u"};
	char *str3 = ft_strtrim(str, str2);
	
	printf("%s", str3);
	free (str3);
}*/
	
