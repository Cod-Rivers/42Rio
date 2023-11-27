/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:09:33 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 15:22:13 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;
	int		len;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	len = j - i;
	result = (char *)malloc(sizeof(char) * (len +1));
	if (!result)
		return (NULL);
	result = ft_substr(s1, i, len + 1);
	return (result);
}
/*int main (void)
{
	const char *str = {"euqueroagua"};
	const char *str2 = {"u"};
	char *str3 = ft_strtrim(str, str2);
	
	printf("%s", str3);
	free (str3);
}*/
