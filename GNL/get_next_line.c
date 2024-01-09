/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:51:58 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/20 14:52:02 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ext_line_with_no_break(char *str)
{
	char	*line;
	int		len_str;
	int		i;

	len_str = ft_strlen(str);
	line = (char *)malloc(sizeof(char) * (len_str + 1));
	i = 0;
	while (str[i])
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ext_line_with_break(char *str)
{
	char	*line;
	int		i;

	i = 0;
	while (str[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	i = 0;
	while (str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ext_line(char *buffer, int nb_read)
{
	if (nb_read == 0)
		return (ext_line_with_no_break(buffer));
	return (ext_line_with_break(buffer));
}

// verifica se tem \n
int	has_line(char *str, int nb_read)
{
	int	n;

	if (!str)
		return (0);
	n = 0;
	while (str[n])
	{
		if (str[n] == '\n')
			return (n + 1);
		n++;
	}
	if (nb_read == 0)
		return (ft_strlen(str));
	return (0);
}

char	*get_next_line(int fd)
{
	int			nb_read;
	int			len_line;
	char		*line;
	static char	*buffer;

	nb_read = 1;
	line = "";
	while ((*line == '\0' && buffer && *buffer) || (nb_read > 0 && fd >= 0))
	{
		len_line = has_line(buffer, nb_read);
		if (len_line)
		{
			line = ext_line(buffer, nb_read);
			buffer = remove_ext_line(buffer, len_line);
			return (line);
		}
		else
		{
			buffer = resize_buffer(buffer);
			nb_read = read(fd, buffer + ft_strlen(buffer), BUFFER_SIZE);
		}
	}
	if (*buffer)
		free(buffer);
	return (NULL);
}

int	main (void)
{
	int		fd;
	char	buf[256];
	int		chars_read;

	fd = open("text.txt", O_RDONLY);

		ft_printf("buf %s",get_next_line(fd));
		ft_printf("buf %s",get_next_line(fd));
		ft_printf("buf %s",get_next_line(fd));
	
	return (0);
}