/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:15:31 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/18 16:09:32 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void	*ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = str;
	i = 0;
	if (n == 0)
	{
	}
	else
	{
		while (i < n)
		{
			temp[i] = 0;
			i++;
		}
	}
}
/*int main() 
{
	char str[] = "Esta é uma string.";

  // Preenche a string str com zeros
	bzero(str, strlen(str));
	printf("%s\n", str);

  // Preenche a string str com caracteres 'a'
	bzero(str, strlen(str));
	printf("%s\n", str);



  // Preenche os primeiros 5 bytes da string str com caracteres 'b'
	bzero(str, 5);
	printf("%s\n", str);
}*/
