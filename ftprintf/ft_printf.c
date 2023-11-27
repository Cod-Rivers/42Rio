/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:11:37 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/27 14:49:30 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

char ft_printchar (char letter, ...)
{
	ft_putchar_fd(1, &letter, 1);
}


int	ft_printf(const char *print, ...)
{
	va_list	*str;
	va_start (str, print)

	char	number = var_arg(str, char);
	if (!str)
		return (0);
	
	str = (char *) malloc((size of(char)) * ft_strlen(*) + 1);

}

