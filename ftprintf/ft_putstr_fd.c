/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:22:10 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/21 11:51:24 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr_fd(char *str)
{
	int		i;
	int		c;
	int		contlen;
	char	d;

	i = 0;
	c = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
	{
		i++;
	}
	contlen = i;
	while (c < contlen)
	{
		d = str[c];
		write(1, &d, 1);
		c++;
	}
}
/*int main(void)
{
    char *string;

    string = "riverson";
    
        
    ft_putstr(string);
    
}*/
