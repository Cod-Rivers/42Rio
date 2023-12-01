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

/*lib functions*/
void	ft_putchar_fd(char c, int fd);
int	ft_print_digit(long nb, int base);

#endif
