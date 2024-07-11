/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el <mc-m-el-@student.42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:15:24 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/12/12 20:57:25 by mc-m-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_choice(char c, va_list *args)
{
	if (c == '%')
		return (ft_printchar('%'));
	else if (c == 'c')
		return (ft_printchar(va_arg(*args, int)));
	else if (c == 's')
		return (ft_printstr(va_arg(*args, char *)));
	else if (c == 'p')
		return (ft_printpointer(va_arg(*args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_printdiu(va_arg(*args, int), c));
	else if (c == 'u')
		return (ft_printdiu(va_arg(*args, unsigned int), c));
	else if (c == 'x' || c == 'X')
		return (ft_printxxp(va_arg(*args, unsigned long), c));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		c;
	va_list	args;

	c = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			c += ft_choice(format[++i], &args);
		else
			c += ft_printchar(format[i]);
		i++;
	}
	va_end(args);
	return (c);
}
