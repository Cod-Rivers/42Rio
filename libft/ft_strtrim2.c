/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:09:33 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/14 13:10:43 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1) - i;
	if (len == 0)
		return (ft_strdup(""));
	result = ft_substr(s1, i, len);
	return (result);
}
int main (void)
{
	const char *str = {"euqueroagua"};
	const char *str2 = {"u"};
	char *str3 = ft_strtrim(str, str2);
	
	printf("%s", str3);
	free (str3);
}
