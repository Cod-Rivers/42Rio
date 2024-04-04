/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:12:38 by rivda-si          #+#    #+#             */
/*   Updated: 2024/04/04 16:21:24 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(const char *str, int fd)
{
	if (str == NULL)
		return (0);
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}

int	ft_atoi(const char *str)
{
	int	signal;
	int	result;

	signal = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		signal = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (*str >= 0 && *str <= '9')
		{
			result = result * 10 + *str - '0';
			str++;
		}
		else
		{
			ft_putstr("its not a valid PID \n", 2);
			exit(EXIT_FAILURE);
		}
	}
	return (signal * result);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		if (n == -2147483648)
			ft_putstr("-2147483648", 1);
		n = -n;
	}
	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
