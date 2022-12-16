/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:30:56 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/16 13:25:59 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **head)
{
	t_stack	*temp;
	t_stack	*second;

	if (!*head || !(*head)->next)
		return ;
	temp = *head;
	second = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = *head;
	*head = temp;
	while (second->next != temp)
		second = second->next;
	second->next = NULL;
}

void	rev_rotate_a(t_stack **head)
{
	rev_rotate(head);
	if (!*head || !(*head)->next)
		return ;
	ft_printf("rra\n");
}

void	rev_rotate_b(t_stack **head)
{
	rev_rotate(head);
	if (!*head || !(*head)->next)
		return ;
	ft_printf("rrb\n");
}

void	rev_rotate_rr(t_stack **head1, t_stack **head2)
{
	rev_rotate(head1);
	rev_rotate(head2);
	if (!*head1 || !(*head1)->next || !*head2 || !(*head2)->next)
		return ;
	ft_printf("rrr\n");
}
