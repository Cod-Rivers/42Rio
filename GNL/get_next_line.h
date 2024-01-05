/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:52:11 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/20 14:52:14 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL
# define GNL

#ifndef BUF_SIZE
# define BUF_SIZE 10
#endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

/*lib functions lembrar de tirar ntes de enviar*/
int ft_printf(const char *str, ...);

#endif