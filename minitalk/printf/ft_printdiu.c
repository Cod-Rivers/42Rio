/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdiu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el <mc-m-el-@student.42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:23:07 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/12/07 18:21:13 by mc-m-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_length(long int n)
{
	int	v;

	v = 0;
	if (n < 0)
	{
		n *= -1;
		v++;
	}
	while (n > 0)
	{
		n /= 10;
		v++;
	}
	return (v);
}

static int	ft_main(long int n)
{
	char		*str;
	int			len;
	long int	x;

	x = n;
	len = ft_length(x);
	str = (char *)malloc(sizeof(char) * len + 1);
	if ((!str))
		return (0);
	if (x < 0)
	{
		str[0] = '-';
		x *= -1;
	}
	str[len] = '\0';
	while (x > 0)
	{
		str[--len] = x % 10 + '0';
		x = x / 10;
	}
	ft_printstr(str);
	free(str);
	return (ft_length(n));
}

int	ft_printdiu(int n, char c)
{
	if (n == 0)
		return (ft_printchar('0'));
	if (c == 'u')
		return (ft_main((unsigned int)n));
	else
		return (ft_main((int)n));
}
