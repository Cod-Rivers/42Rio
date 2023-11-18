/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:22:43 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/18 03:28:12 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_elem(int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	to_char(int n)
{
	return (n + '0');
}

int	verify_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int		negative;
	int		elemen;
	char	*point;

	negative = verify_neg(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (negative)
		n *= -1;
	elemen = count_elem(n) + negative;
	point = (char *)malloc(sizeof(char) * (elemen + 1));
	if (!point)
		return (0);
	if (negative)
		point[0] = '-';
	point[elemen] = '\0';
	while ((--elemen) >= negative)
	{
		point[elemen] = to_char((n % 10));
		n /= 10;
	}
	return (point);
}
