/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 22:10:21 by rivda-si          #+#    #+#             */
/*   Updated: 2024/04/23 22:10:26 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	has_duplicate(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atol(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	has_num(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static	void	check(long tmp, char **args, int argc, int i)
{
	if (has_duplicate(tmp, args, i))
		ft_error("Error\n", args, argc);
	if (!has_num(args[i]))
		ft_error("Error\n", args, argc);
	if (tmp < -2147483648 || tmp > 2147483647)
		ft_error("Error\n", args, argc);
}

void	check_args(char **argv, int argc)
{
	int		i;
	long	tmp;
	char	**args;

	i = 0;
	if (argc == 2)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		tmp = ft_atol(args[i]);
		check(tmp, args, argc, i);
		i++;
	}
	if (argc == 2)
		ft_free((void **)args);
}
