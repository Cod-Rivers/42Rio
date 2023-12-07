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

static int ft_select_symbol(va_list argpoint, const char *str)
	{
		if (*str == 'd')
			return (ft_putnbr_fd(va_arg(argpoint, int)));
		else if (*str == 'i')
			 return (ft_putnbr_fd(va_arg(argpoint, int)));					
		else if (*str == 'p')
			 return (ft_printp(va_arg(argpoint, unsigned long long)));
		else if (*str == 's')
			 return (ft_putstr_fd(va_arg(argpoint, char*)));
		else if (*str == 'c')
			 return (ft_print_char(va_arg(argpoint, int))); //obs(nesse caso um tipo char se transforma em int em função variadicas)
		else if (*str == 'u')
			 return (ft_put_u(va_arg(argpoint, unsigned int)));
		else if (*str == 'x')
			 return (base16(va_arg(argpoint, unsigned int)));
		else if (*str == 'X')
			 return (binariosup(va_arg(argpoint, unsigned int)));
		else if (*str == '%')
			 return ft_print_char('%');
		return (0);
	}

void teste (const char *str, ...)
{
	//Inicializa o ponteiro va_list
	va_list argpoint;
	va_start (argpoint, str);

		//itera sobre os argumentos
	{
		while (*str)
		{	
			
			if ( *str == '%')
			{
				str++;
				ft_select_symbol(argpoint, str);	
			}
			else
				ft_print_char(*str);
			str++;
		}
	}
	// Finaliza o ponteiro va_list
	va_end(argpoint);
}

int main() 
{
	int i;
	unsigned int u;


	char *str;
	char z;
	str = "esta andando";
	u = -42;
	z = '@';

	i = -4046;
	//chama a função teste()
	teste("agu %i a %d a ponteiro =%p a  string = %s char = %c numero absoluto= %u  examinusc = %x examais= %X minha", i, i, str, str, z, u, i, i);
	printf("\n");
	printf("agu %i a %d a ponteiro = %p a string = %s char = %c numero absoluto= %u examinusc = %x examais= %X original", i, i, str, str, z, u, i, i);
	return 0;
}
