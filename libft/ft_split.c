/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:09:04 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/06 13:43:05 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int ocorrences (char const *s, char c)
{
    int len;
    int i;

    i = 0;
    len = 0;
    while (s[i] != '\0' && s[i+1] != c)
    {
        if (s[i] == c)
        {
            len++;
        }
        i++;
    }
    return (len + 1);
}
static char **allocate(char const *s, char c, char **variable)
{
    size_t o;
    size_t i;
    size_t len;
	
    i = 0;
    len = 0;
    o = 0;
    
	while (s[i] != '\0')
    {
		if (s[i] != c)
			len++;
		if (s[i] == c && s[i+1] != c)
		{
			variable[o] = (char *) malloc (sizeof(char) * (unsigned int)(len + 1 ));
		}
		if(!(variable[o]))
			return (NULL);
	}
	return (variable);
}

char **fill (char const *s, char c, char **varible)
{
	size_t i;
	size_t **str;
	size_t o;

	i = 0;
	str = 0;
	o = 0;
	while(variable[i] != c || variable[i] != '\0')
	{
		str[o][i] = variable[i];
		i++
	}
	if(variable[i] == c)
	{
		str[o][i] = '\0';
		o++;
		while(variable[i] == c && variable[i] != '\0')
			i++;
	}
	
	return (str);
}
char **ft_split (char const *s, char c)
{
	size_t i;
	int	 t;
	char **str;
	char str2;
	
	t = ocurrences(s, c);
	str2 = allocate(s,c, str);
	str = (s, c, str)
	
	return (str);

}


int main (void)
{
    char const *s[10] = {"parapeito"};
    char  p = 'p';
    char **test = ft_split (s, p);

    printf ('%s', test);
}
