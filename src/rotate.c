/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 08:34:12 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/15 14:19:05 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	rotate_a(t_stack **head)
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
	(*temp).next = NULL;
	tail->next = temp;
	ft_printf("ra\n");
}

void	rotate_b(t_stack **head)
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
	(*temp).next = NULL;
	tail->next = temp;
	ft_printf("rb\n");
}

void	rotate_rr(t_stack **head1, t_stack **head2)
{
	t_stack	*tail1;
	t_stack	*temp1;

	temp1 = *head1;
	if ((*head1) == NULL || (*head1)->next == NULL)
		return ;
	tail1 = *head1;
	while (tail1->next)
		tail1 = tail1->next;
	*head1 = temp1->next;
	(*temp1).next = NULL;
	temp1 = *head2;
	if ((*head2) == NULL || (*head2)->next == NULL)
		return ;
	tail1 = *head2;
	while (tail1->next)
		tail1 = tail1->next;
	*head2 = temp1->next;
	(*temp1).next = NULL;
	ft_printf("rr\n");
}
