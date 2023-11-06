/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:11:01 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/06 11:11:09 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t  j;
    char    *temp;
    size_t lennew;

    i = 0;
    j = 0;
    lennew = (ft_strlen (s1) - ft_strlen(set));
    temp = (char *) malloc(sizeof(char)* lennew +1);
    if (!temp)
        return (NULL);
    while (i < ft_len(s1))
        if (s1[i] != set[i])
        {
            temp[j] = s1[i];
            i++;
            j++;
        }
    i++
    temp [i] = '\0';
    return (temp);
}
