/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <mc-m-el-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:25:22 by mc-m-el-          #+#    #+#             */
/*   Updated: 2024/03/11 18:26:47 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int sig)
{
	static char	c;
	static int	i;

	if (sig == SIGUSR1)
		c |= (1 << i);
	else if (sig == SIGUSR2)
		c |= (0 << i);
	i++;
	if (i == 8)
	{
		ft_printf("%c", c);
		c = 0;
		i = 0;
	}
}

int	main(void)
{
	int	pid;

	ft_printf("\nPID: %i\n", pid = getpid());
	if (pid < 0)
	{
		ft_printf("\nErro: Não foi possível obter o PID\n");
		return (0);
	}
	ft_printf("\nAguardando mensagem...\n");
	while (1)
	{	
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		pause();
	}
	return (0);
}
