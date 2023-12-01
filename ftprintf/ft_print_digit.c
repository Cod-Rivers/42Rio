/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:20:27 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/18 06:10:36 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_digit(long nb, int base)
{
	char	*digits;
	int	i;
	
	digits = "0123456789abcdef";

	if (nb == -2147483648)
	{
		ft_putchar_fd('-', 1);
		ft_putchar_fd('2', 1);
		ft_print_digit(147483648, base);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		ft_print_digit(-nb, base) + 1;
	}
	else if (nb < base)
	{
		ft_putchar_fd(digits[nb], 1);
	}
	else
	{
		i = ft_print_digit(nb / base, base);
		i + ft_print_digit(nb % base, base);
	}
	return i;
}

int main (void)
{
	int x;
	int y;
	unsigned int z;
	
	x = 25;
	y = ft_print_digit((long)x, 10);
	z = ft_print_digit((long)x, 16);
	
}
/*
#include <unistd.h>
#include <stdio.h>

int ft_putchar (char c)
{
    return write(1, &c, 1);
}

int    ft_print_digit(long nb, int base)
{
    char    *digits;
    int    i;
    
    digits = "0123456789abcdef";
    i = 0;

    /*if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        return ft_print_digit(147483648, base);
    }*/
    if (nb < 0)
    {
        ft_putchar('-');
        return ft_print_digit(-nb, base) + 1;
    }
    else if (nb < base)
    {
        return ft_putchar(digits[nb]);
    }
    else
    {
        i = ft_print_digit(nb / base, base);
        return  i + ft_print_digit(nb % base, base);
    }
    
}

int main (void)
{
    int x;
    int y;
    unsigned int z;
    
    x = -42;
    y = ft_print_digit(x, 10);
       printf("\n");
    z = ft_print_digit(x, 16);
    printf("\néé %x",-42);
    
}*/




