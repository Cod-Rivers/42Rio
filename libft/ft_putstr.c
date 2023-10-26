/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:00:58 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/26 16:09:46 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	int		c;
	int		contlen;
	char	d;

	i = 0;
	c = 0;
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
