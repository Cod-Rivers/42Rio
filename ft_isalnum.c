/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:05:55 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 14:06:05 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c <= 122 && c >= 97) || (c >= 48 && c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*int main (void)
{
	int c;
	
	c = '0';
	
	if (ft_isalpha(c))
	{
		printf("é alfabetico");
	}
	else
	{
		printf("não é");
	}
}*/
