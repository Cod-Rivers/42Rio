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
# include <unistd.h>
# include <stdarg.h>


/*lib functions*/
void    base16(unsigned long long n);
void    binariosup(unsigned long long n);
void    base10(int n);
int	    ft_print_char(char c);
int	    ft_print_digit(long nb, int base);
void	ft_putstr_fd(char *str);
void	ft_putnbr_fd(int nb);
void 	ft_printp(unsigned long long n);


#endif
