/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:03:14 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 14:03:27 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	return (ft_memset(str, 0, n));
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
