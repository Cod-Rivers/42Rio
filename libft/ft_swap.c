/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:32:06 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/26 16:11:36 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>
#include "libft.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}
/*int main(void)
{
    int x;
    int y;

    x = 1;
    y = 2;

    ft_swap(&x, &y);

    printf(" %d, %d", x, y);
}*/
