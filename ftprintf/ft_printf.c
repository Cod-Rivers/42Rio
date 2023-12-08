/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:26:48 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/08 15:11:36 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_select_symbol(va_list argpoint, const char *str)
{
	if (*str == 'd')
		return (ft_finaly (va_arg (argpoint, int)));
	else if (*str == 'i')
		return (ft_finaly (va_arg (argpoint, int)));
	else if (*str == 'p')
		return (ft_printp (va_arg (argpoint, unsigned long)));
	else if (*str == 's')
		return (ft_putstr_fd (va_arg (argpoint, char *)));
	else if (*str == 'c')
		return (ft_print_char (va_arg (argpoint, int)));
	else if (*str == 'u')
		return (ft_put_u (va_arg (argpoint, unsigned int)));
	else if (*str == 'x')
		return (ft_base16 (va_arg (argpoint, unsigned int), 'a'));
	else if (*str == 'X')
		return (ft_base16 (va_arg (argpoint, unsigned int), 'A'));
	else if (*str == '%')
		return (ft_print_char ('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	argpoint;
	int		ret;

	ret = 0;
	va_start (argpoint, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ret += ft_select_symbol(argpoint, str);
		}
		else
			ret += ft_print_char(*str);
		str++;
	}
	va_end(argpoint);
	return (ret);
}
