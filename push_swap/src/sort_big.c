/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 22:17:14 by rivda-si          #+#    #+#             */
/*   Updated: 2024/04/23 22:17:17 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	get_max_bits(t_list **stack)
{
	int		max_bits;
	int		max;

	max = get_max_index(stack);
	max_bits = 0;
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

static void	sort_b(t_list **stack_a, t_list **stack_b, int max_bit, int bit)
{
	int	size;

	size = ft_lstsize(*stack_b);
	while (size-- && bit <= max_bit && !is_sorted(stack_a))
	{
		if ((((*stack_b)->index >> bit) & 1) == 0)
			rb(stack_b);
		else
			pa(stack_a, stack_b);
	}
	if (is_sorted(stack_a))
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
}

void	sort_big(t_list **stack_a, t_list **stack_b)
{
	int	bit;
	int	max_bits;
	int	size;

	max_bits = get_max_bits(stack_a);
	size = ft_lstsize(*stack_a);
	bit = 0;
	while (bit <= max_bits)
	{
		size = ft_lstsize(*stack_a);
		while (size-- && !is_sorted(stack_a))
		{
			if ((((*stack_a)->index >> bit) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
		}
		bit++;
		sort_b(stack_a, stack_b, max_bits, bit);
	}
	while (ft_lstsize(*stack_b) != 0)
		pa(stack_a, stack_b);
}
