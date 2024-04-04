/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:39:33 by rivda-si          #+#    #+#             */
/*   Updated: 2024/04/04 13:43:17 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void	end(int sig)
{
	if (sig == SIGUSR2)
	{
		ft_putstr("message received!\n", STDOUT_FILENO);
	}
	exit(EXIT_SUCCESS);
}

void	send_char(char c, int server_pid)
{
	int	bit;

	bit = 0;
	while (bit <= 7)
	{
		if (c & (0b10000000 >> bit))
		{
			kill(server_pid, SIGUSR1);
		}
		else
			kill(server_pid, SIGUSR2);
		++bit;
		usleep(500);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	server_pid;

	signal(SIGUSR2, end);
	i = 0;
	server_pid = ft_atoi(argv[1]);
	if (argc == 3)
	{
		while (argv[2][i])
		{
			send_char(argv[2][i], server_pid);
			i++;
		}
		send_char('\0', server_pid);
	}
	else
	{
		ft_putstr("enter the input""./client <PID> \"message\" \n", 2);
	}
}
