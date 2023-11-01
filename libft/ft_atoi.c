/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:31:30 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/01 13:50:13 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sinal;
	int	res;

	i = 0;
	sinal = 1;
	res = 0;
	while ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\n')
		|| (str[i] == '\r') || (str[i] == '\t')
		|| (str[i] == '\v'))
	{
		i++;
	}
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i++] == '-')
		{
			sinal = sinal * -1;
		}
	}
	while ((str[i]) >= '0' && (str[i] <= '9'))
	{
		res = (res * 10) + ((char) str[i++] - '0');
	}
	return (res * sinal);
}
/*int	main(void)
{

	char str[] = "     ---+--+1234ab567";
	int var;

	var = ft_atoi(str);
	printf("%d",var);
}*/
