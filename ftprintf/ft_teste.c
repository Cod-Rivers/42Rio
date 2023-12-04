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
#include "printf"

void teste (int n, ...)
{
	//Inicializa o ponteiro va_list
	va_list args;
	va_start (args, n);

	//itera sobre os argumentos
	for (int i = 0; i <= n; i++)
	{
		printf("%d: %d\n", i, va_arg(args, int));
	}
	// Finaliza o ponteiro va_list
	va_end(args);
}

int main() 
{
	//chama a função teste()
	teste(3, 5, 9);
	return 0;
}
