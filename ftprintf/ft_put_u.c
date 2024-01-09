/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:20:27 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/07 14:10:04 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	capture(unsigned int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	ft_finaly2(unsigned int nb)
{
	int	x;

	if (nb > 9)
	{
		ft_put_u(nb / 10);
		ft_put_u(nb % 10);
	}
	else
	{
		x = '0' + nb;
		ft_print_char(x);
	}
}

int	ft_put_u(unsigned int nb)
{
	int	i;

	i = capture(nb);
	ft_finaly2(nb);
	return (i);
}
