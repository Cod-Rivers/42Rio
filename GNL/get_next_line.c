/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:51:58 by rivda-si          #+#    #+#             */
/*   Updated: 2024/01/27 15:11:14 by rivda-si         ###   ########.fr       */
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
	char		*line;
	static char	*buffer;

	nb_read = 1;
	line = "";
	while ((*line == '\0' && buffer && *buffer) || (nb_read > 0 && fd >= 0))
	{
		if (has_line(buffer, nb_read))
		{
			line = ext_line(buffer, nb_read);
			buffer = remove_ext_line(buffer, has_line(buffer, nb_read));
			return (line);
		}
		else
		{
			buffer = resize_buffer(buffer);
			nb_read = read(fd, buffer + ft_strlen(buffer), BUFFER_SIZE);
		}
	}
	if (buffer)
		free(buffer);
	buffer = 0;
	return (NULL);
}

/*#include <fcntl.h>
#include <stdio.h>
int main()
{
     int fd = open("text.txt", O_RDONLY);
     char *a = get_next_line(fd);
     printf("primeira chamada: %s", a);
     free(a);

     char *b = get_next_line(fd);
     printf("segunda chamada: %s", b);
     free(b);

     char *c = get_next_line(fd);
     printf("terceira chamada: %s", c);
     free(c);

     char *d = get_next_line(fd);
     printf("quarta chamada: %s", d);
     free(d);

     char *e = get_next_line(fd);
     printf("5 chamada: %s", e);
     free(e);

     char *f = get_next_line(fd);
     printf("6 chamada: %s", f);
     free(f);

     char *g = get_next_line(fd);
     printf("7 chamada: %s", g);
     free(g);

     char *h = get_next_line(fd);
     printf("8 chamada: %s", h);
     free(h);

     char *i = get_next_line(fd);
     printf("9 chamada: %s", i);
     free(i);

     char *j = get_next_line(fd);
     printf("10 chamada: %s", j);
     free(j);

     char *k = get_next_line(fd);
     printf("11 chamada: %s", k);
     free(k);

     char *l = get_next_line(fd);
     printf("12 chamada: %s", l);
     free(l);

     char *m = get_next_line(fd);
     printf("13 chamada: %s", m);
     free(m);

     char *n = get_next_line(fd);
     printf("décima quinta chamada: %s", n);
     free(n);

     char *o = get_next_line(fd);
     printf("14 chamada: %s", o);
     free(o);

     close(fd);

     return 0;
}*/
