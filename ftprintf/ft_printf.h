/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:11:23 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/08 15:16:01 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

/*lib functions*/
int	ft_base16(unsigned long long n, const char c);
int	ft_print_char(const char c);
int	ft_putstr_fd(char *str);
int	ft_finaly(int nb);
int	ft_printp(unsigned long long n);
int	ft_put_u(unsigned int nb);
int	ft_printf(const	char *str, ...);

#endif
