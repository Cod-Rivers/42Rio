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