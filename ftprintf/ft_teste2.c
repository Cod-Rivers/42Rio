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
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

void teste (const char *str, ...)
{
	//Inicializa o ponteiro va_list
	va_list args;
	va_start (args, str);
	int	i;
	int	c;
	
	
	i = 0;
	c = '%';
		//itera sobre os argumentos
	{
		while (i < strlen(str))
		{	
			
			if ( str[i] == '%')
			{
				if (str[i + 1] == 'd')
				{
					printf("\n contém  um double ");
				}
				else if (str[i + 1] == 'i')
				{
					printf("contem um inteiro");
					
				}
				else if (str[i + 1] == 'p')
				{
					printf("contem um endereço para ponteiro");
					
				}
				else if (str[i + 1] == 's')
				{
					printf("contem uma string");
				}
				else if (str[i +1] == 'c')
				{
					printf ("contem um char");
				}
				else if (str[i + 1] == 'u')
				{
					printf ("contem um unsigned int");
				}
				else if (str[i + 1] == 'x')
				{
					printf ("contem um exadecimal minusculo");
				}
				else if (str[i + 1] == 'X')
				{
					printf ("contem um exadecimal Maiusculo \n");
				}
				else if (str[i +1] == '%')
				{
					printf ("contei outro sinal de porcentagem");
				}
				i++;
					
			}
			else
				write (1, &str[i], 1);
			i++;
				
				
		}
		if (!strchr(str, c))
				printf("não contem o sinal");
				
		
	}
	// Finaliza o ponteiro va_list
	va_end(args);
}

int main() 
{
	//chama a função teste()
	teste("agu%ua%d" );
	return 0;
}
