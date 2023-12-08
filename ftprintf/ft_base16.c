/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base16.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:39:08 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/08 15:13:26 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base16(unsigned long long n, const char c)
{
	char	hexadecimal[100];
	int		rest;
	int		i;
	int		j;

	if (n == 0)
		return (write(1, "0", 1));
	i = 0;
	while (n > 0)
	{
		rest = n % 16;
		if (rest < 10)
			hexadecimal[i] = rest + '0';
		else
			hexadecimal[i] = rest - 10 + c;
		i++;
		n = n / 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &hexadecimal[j], 1);
		j--;
	}
	return (i);
}
/*	int main (void)
	{
		int x = -42;
	
		ft_base16(x,'A');
		printf("\n");
		printf("%X",-42);
		printf("\n");
		printf("orig=%d", printf("%X",-42));
		printf("\n");		
		printf("minha=%d", ft_base16(-42,'A'));
		
		return 0;
	}*/
