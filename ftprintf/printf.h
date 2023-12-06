/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:29:32 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/29 16:33:10 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdarg.h>


/*lib functions*/
int    base16(unsigned long n);
int    binariosup(unsigned long n);
int    base10(int n);
int    ft_print_char(const char c);
int	   ft_print_digit(long nb, int base);
int    ft_putstr_fd(char *str);
int	   ft_putnbr_fd(int nb);
int    ft_printp(unsigned long long n);


#endif
