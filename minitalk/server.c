/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:12:03 by rivda-si          #+#    #+#             */
/*   Updated: 2024/04/04 16:03:31 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void	error_server(void)
{
	ft_putstr("server error\n", 2);
	exit(EXIT_FAILURE);
}

void	handler(int sig, siginfo_t *info, void *more_info)
{
	static char	c = 0b00000000;
	static int	bit = 0;

	(void) more_info;
	if (SIGUSR1 == sig)
		c |= 0B10000000 >> bit;
	++bit;
	if (8 == bit)
	{
		if (c == '\0')
		{
			write(1, "\n", 1);
			kill(info -> si_pid, SIGUSR2);
		}
		else
			write(1, &c, 1);
		c = 0b00000000;
		bit = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;

	if (argc != 1)
	{
		ft_putstr("enter a valid ./server process""name\n", 2);
        exit(EXIT_FAILURE);
	}
	argv[][]= NULL;
	ft_putstr("PID -> ", STDOUT_FILENO);
	ft_putnbr(getpid());
	write(STDOUT_FILENO, "\n", 1);
	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handler;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		error_server();
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
	{
		error_server();
	}
	while (1)
		pause();
}
