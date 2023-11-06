/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:09:04 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/06 11:09:54 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft" 

int ocorrencias (char const *s, char c)
{
    int j;
    int i;

    i = 0;
    j = 0;
    while (s[i] != '\0' && s[i+1] != c)
    {
        if (s[i] == c)
        {
            j++;
        }
        i++;
    }
    return (j + 1);
}
char **ft_split (char const *s, char c)
{
    int o;
    int i;
    int j;

    i = 0;
    j = 0;
    o = ocorrencias(s, c);
    char *variaveis[o];
    while (s[i] != '\0')
    {
        while(s[i] != '\0')
        {
            if (s[i] == c && [i+1] != c)
            {
                i++;
                o++;
            }
            variaveis[j][i] = s[i];
        }
    }

}
int main (void)
{
    char const *s[10] = {"parapeito"};
    char  p = 'p';
    char **test = ft_split (s, p);

    printf ('%s', test);
}
