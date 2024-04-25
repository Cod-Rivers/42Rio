/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 22:19:57 by rivda-si          #+#    #+#             */
/*   Updated: 2024/04/23 22:19:59 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstclear(t_list **lst, int (*del)(int *))
{
	t_list	*tmp;
	t_list	*element;

	if (!lst || !del)
		return ;
	element = *lst;
	while (element != NULL)
	{
		tmp = element->next;
		ft_delone(element, del);
		element = tmp;
	}
	*lst = NULL;
}
