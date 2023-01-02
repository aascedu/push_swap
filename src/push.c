/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 09:50:38 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/16 17:28:51 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del_first(t_stack **head)
{
	t_stack	*temp;

	temp = *head;
	*head = temp->next;
	free(temp);
}

void	push_a(t_stack **head_a, t_stack **head_b)
{
	t_stack	*new;
	t_stack	*temp;

	temp = *head_a;
	if (!*head_b)
		return ;
	new = create_node((*head_b)->number, *head_a);
	if (!new)
		return (free_lst(*head_b));
	*head_a = new;
	if (temp)
		new->next = temp;
	del_first(head_b);
	ft_printf("pa\n");
}

void	push_b(t_stack **head_a, t_stack **head_b)
{
	t_stack	*new;
	t_stack	*temp;

	temp = *head_b;
	if (!*head_a)
		return ;
	new = create_node((*head_a)->number, *head_b);
	if (!new)
		return (free_lst(*head_a));
	*head_b = new;
	if (temp)
		new->next = temp;
	del_first(head_a);
	ft_printf("pb\n");
}
