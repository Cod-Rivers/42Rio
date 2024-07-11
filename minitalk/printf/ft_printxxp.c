/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printxxp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <mc-m-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:22:00 by mc-m-el           #+#    #+#             */
/*   Updated: 2024/03/11 18:37:19 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_length(long int n)
{
	int	v;

	v = 0;
	while (n > 0)
	{
		n /= 16;
		v++;
	}
	return (v);
}

static int	ft_main(unsigned long n, char c)
{
	if (n >= 16)
	{
		ft_main(n / 16, c);
		ft_main(n % 16, c);
	}
	else if (n < 10)
		ft_printchar(n + 48);
	else if (c == 'x' || c == 'p')
		ft_printchar(n + 87);
	else
		ft_printchar(n + 55);
	return (0);
}

int	ft_printxxp(unsigned long n, char c)
{
	if (n == 0)
		return (ft_printchar('0'));
	if (c == 'x')
		return (ft_length(n) + ft_main(n, c));
	else if (c == 'X')
		return (ft_length(n) + ft_main(n, c));
	else
		return (ft_length(n) + ft_main((unsigned long long)n, c));
}
