/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:52:11 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/20 14:52:14 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ext_line_with_break(char *str);
char	*ext_line_with_no_break(char *str);
char	*remove_ext_line(char *buffer, int len);
char	*resize_buffer(char *buffer);

#endif
