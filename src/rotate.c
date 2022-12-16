/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 08:34:12 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/16 13:26:19 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	rotate(t_stack **head)
{
	t_stack	*tail;
	t_stack	*temp;

	temp = *head;
	if ((*head) == NULL || (*head)->next == NULL)
		return ;
	tail = *head;
	while (tail->next)
		tail = tail->next;
	*head = temp->next;
	temp->next = NULL;
	tail->next = temp;
}

void	rotate_a(t_stack **head)
{
	rotate(head);
	ft_printf("ra\n");
}

void	rotate_b(t_stack **head)
{
	rotate(head);
	ft_printf("rb\n");
}

void	rotate_rr(t_stack **head1, t_stack **head2)
{
	rotate(head1);
	rotate(head2);
	if (!*head1 || !(*head1)->next || !*head2 || !(*head2)->next)
		return ;
	ft_printf("rr\n");
}
