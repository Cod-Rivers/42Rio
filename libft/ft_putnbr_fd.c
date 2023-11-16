/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:07:18 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/01 13:57:20 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	x;

	if (nb == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		ft_putnbr_fd(147483648,fd);
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
		ft_putnbr_fd(nb,fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		x = '0' + nb;
		write (fd, &x, 1);
	}
}
/*int	main(void)
{
	ft_putnbr(214748348);
}*/
