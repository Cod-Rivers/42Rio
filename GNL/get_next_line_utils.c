/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:52:11 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/20 14:52:14 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*resize_buffer(char *buffer)
{
	char	*resized_buffer;
	int		len_buffer;
	int		i;
	int		resize_len;

	len_buffer = ft_strlen(buffer);
	resize_len = len_buffer + BUFFER_SIZE + 1;
	resized_buffer = (char *)malloc(sizeof(char) * resize_len);
	i = 0;
	while (i < len_buffer)
	{
		resized_buffer[i] = buffer[i];
		i++;
	}
	while (i < len_buffer + BUFFER_SIZE + 1)
	{
		resized_buffer[i] = '\0';
		i++;
	}
	free(buffer);
	return (resized_buffer);
}

char	*remove_ext_line(char *buffer, int len)
{
	char	*resized_buffer;
	int		i;
	int		resized_len;

	resized_len = ft_strlen(buffer + len) + 1;
	resized_buffer = (char *)malloc(sizeof (char) * resized_len);
	i = 0;
	while (buffer[len + i])
	{
		resized_buffer[i] = buffer[len + i];
		i++;
	}
	resized_buffer[i] = '\0';
	free(buffer);
	return (resized_buffer);
}
