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


#include "printf.h"

void teste (const char *str, ...)
{
	//Inicializa o ponteiro va_list
	va_list argpoint;
	va_start (argpoint, str);
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
					base10(va_arg(argpoint, int));
				}
				else if (str[i + 1] == 'i')
				{
					ft_putnbr_fd(va_arg(argpoint, int));					
				}
				else if (str[i + 1] == 'p')
				{
					ft_printp(va_arg(argpoint, unsigned long long));
					
				}
				else if (str[i + 1] == 's')
				{
					ft_putstr_fd(va_arg(argpoint, char*));
				}
				else if (str[i +1] == 'c')
				{
					ft_print_char(va_arg(argpoint, int)); //obs(nesse caso um tipo char se transforma em int em função variadicas)
				}
				else if (str[i + 1] == 'u')
				{
					ft_putnbr_fd(va_arg(argpoint, unsigned int));
				}
				else if (str[i + 1] == 'x')
				{
					base16(va_arg(argpoint, unsigned int));
				}
				else if (str[i + 1] == 'X')
				{
					binariosup(va_arg(argpoint, unsigned int));
				}
				else if (str[i +1] == '%')
				{
					write(1, (char *)'%',1);
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
	va_end(argpoint);
}

int main() 
{
	int i;
	unsigned int u;


	char *str = "esta andando";
	u = 42;

	i = -10;
	//chama a função teste()
	teste("agu %x a %d e %i e %X e %u e %s e %p", i, i, i, i, u, str, str);
	printf("\n");
	printf("agu %x a %d e %i e %X e %u e %s e %p", i, i, i, i, u, str, str);
	return 0;
}
