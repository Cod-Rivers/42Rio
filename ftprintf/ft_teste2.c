/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_teste.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:26:48 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/27 15:38:49 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void teste (const char *str, ...)
{
	//Inicializa o ponteiro va_list
	va_list args;
	va_start (args, str);
	int	i;
	int	j;
	
	i = 0;
		//itera sobre os argumentos
	{
		while (i < strlen(str))
		{	
			if ( str[i] == '%')
			{
				(printf("contém  no indice %d\n", i));
				i++;
				j++;
			}
			else 
				
				i++;
		
		}
		
	}
	// Finaliza o ponteiro va_list
	va_end(args);
}

int main() 
{
	//chama a função teste()
	teste("ag%ua%" );
	return 0;
}
