/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el <mc-m-el-@student.42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:21:37 by mc-m-el           #+#    #+#             */
/*   Updated: 2023/12/12 20:57:59 by mc-m-el          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(void *p)
{
	if (!p)
		return (ft_printstr("(nil)"));
	return (ft_printstr("0x") + ft_printxxp((unsigned long long)p, 'p'));
}
