/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:20:27 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/08 15:12:52 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);0
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

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

int	ft_finaly(int nb)
{
	int	i;

	if (nb < 0)
		i = count(nb) + 1;
	else
		i = count(nb);
	ft_putnbr_fd(nb);
	return (i);
}
