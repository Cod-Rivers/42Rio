/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:02:36 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/14 14:25:31 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static size_t	ocorrences(char const *s, char c)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
		{
			len++;
		}
		i++;
	}
	return (len + 1);
}

static char	**allocate(char const *s, char c, char **var)
{
	int	o;
	int	i;
	int	len;

	i = 0;
	len = 0;
	o = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			len++;
		if (s[i] == c && s[i + 1] == 0)
		{
			var[o] = (char *) malloc (sizeof(char) * (unsigned int)(len + 1));
			if (!(var[o]))
				return (NULL);
			while (s[i + 1] == c && s[i + 1] != '\0')
			{
				i++;
				len = 0;
				o++;
			}
			i++;
		}
		var[o] = 0;
	}
	return (var);
}

static char	**fsubstr(char const *s, char c, char **var)
{
	int	i;
	int	size;
	int	o;

	i = 0;
	size = 0;
	o = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			var[size][o] = s[i];
			o++;
		}
		if (s[i] == c || s[i + 1] == '\0')
		{
			var[size][o] = '\0';
			o++;
			size++;
			while (s[i + 1] == c && s[i + 1] != '\0')
			{
				i++;
			}
		}
		i++;
	}
	return (var);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	int		t;
	char	**str;
	char	*str2;

	if (!s)
		return (NULL);
	str2 = ft_strtrim(s, &c);
	size = ocorrences(s, c);
	str = malloc(sizeof(char *) * (size + 1));
	if (!str)
		return (NULL);
	t = 0;
	if (!allocate(str2, c, str))
	{
		while (str[t])
		{
			free(str[t++]);
			free (str);
		}
		return (NULL);
	}
	str = fsubstr(str2, c, str);
	free(str2);
	return (str);
}
