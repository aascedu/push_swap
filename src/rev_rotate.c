/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:30:56 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/15 14:05:14 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_stack **head)
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
	ft_printf("rra\n");
}

void	rev_rotate_b(t_stack **head)
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
	ft_printf("rrb\n");
}

void	rev_rotate_rr(t_stack **head1, t_stack **head2)
{
	t_stack	*temp1;
	t_stack	*second1;

	if (!*head1 || !(*head1)->next)
		return ;
	temp1 = *head1;
	second1 = *head1;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = *head1;
	*head1 = temp1;
	second1 = lstfind(second1, temp1);
	second1->next = NULL;
	if (!*head1 || !(*head1)->next)
		return ;
	temp1 = *head2;
	second1 = *head2;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = *head2;
	*head2 = temp1;
	second1 = lstfind(second1, temp1);
	second1->next = NULL;
	ft_printf("rrb\n");
}
