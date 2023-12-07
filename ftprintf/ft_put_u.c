/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:20:27 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/18 06:10:36 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_u(unsigned int nb)
{
	unsigned int    x;

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
	return (0);
}