/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:20:27 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/18 06:10:36 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_fd(int nb)
{
	char	x;

	if (nb == -2147483648)
	{
		ft_print_char('-');
		ft_print_char('2');
		ft_putnbr_fd(147483648);
	}
	else if (nb < 0)
	{
		ft_print_char('-');
		nb = nb * -1;
		ft_putnbr_fd(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10);
		ft_putnbr_fd(nb % 10);
	}
	else
	{
		x = '0' + nb;
		ft_print_char(x);
	}
}
