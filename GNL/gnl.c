/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:51:58 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/20 14:52:02 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "gnl.h"

int get_next_line(int fd)
{
	int			nb_read;
	int			len_line;
	char		*line;
	static char	*buffer;

	nb_read = 1;
	line = "";
	while((*line == '\0' && buffer && *buffer) || (nb_read > 0 && fd >= 0))
	{
		len_line = has_line(buffer, nb_read);
	}	
}

// verifica se tem \n
int has_line(static char *buf, int x)
{
	int n;

	if(!str)
		return (0);
	n = 0;
	while (str[n])
	{
		if (str[n] == '\n')
			return (n + 1);
		n++
	}
	if (nb_read == 0)
		return (ft_strlen(str));
	return(0);
}
int	read_line()
{

}




int main (void)
{
	int		fd;
	char	buf[256];
	int		chars_read;

	fd = open("text.txt", O_CREAT | O_RDONLY);

	while ((chars_read = read (fd, buf, size_t 10)));
	{
		buf[chars_read] = '\0';
		printf("buf %s", buf);
	}
	return (0);
}