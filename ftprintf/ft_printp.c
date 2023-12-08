/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:34:32 by rivda-si          #+#    #+#             */
/*   Updated: 2023/12/07 13:34:37 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(unsigned long long n)
{
	if (!n)
		return (ft_putstr_fd("(nil)"));
	return (ft_putstr_fd("0x") + ft_base16(n, 'a'));
}
/*int main (void)
{
    unsigned long long x;
    
    x = -40406;
	
    ft_printp(x);
    printf("\n");
    printf("original%p", (void *)x);
    return 0;
}*/
