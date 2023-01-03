/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 08:46:51 by aascedu           #+#    #+#             */
/*   Updated: 2023/01/03 13:14:15 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	if ((*a)->number > (*a)->next->number
		&& (*a)->next->number < (*a)->next->next->number
		&& (*a)->number < (*a)->next->next->number)
		return (swap_a(a));
	else if ((*a)->number > (*a)->next->number
		&& (*a)->next->number > (*a)->next->next->number
		&& (*a)->number > (*a)->next->next->number)
		return (swap_a(a), rev_rotate_a(a));
	else if ((*a)->number > (*a)->next->number
		&& (*a)->next->number < (*a)->next->next->number
		&& (*a)->number > (*a)->next->next->number)
		return (rotate_a(a));
	else if ((*a)->number < (*a)->next->number
		&& (*a)->next->number > (*a)->next->next->number
		&& (*a)->number < (*a)->next->next->number)
		return (swap_a(a), rotate_a(a));
	else if ((*a)->number < (*a)->next->number
		&& (*a)->next->number > (*a)->next->next->number
		&& (*a)->number > (*a)->next->next->number)
		return (rev_rotate_a(a));
}

int	find_smallest(t_stack *head)
{
	int	min;

	min = head->number;
	while (head)
	{
		if (min > head->number)
			min = head->number;
		head = head->next;
	}
	return (min);
}

int	smallest_pos(t_stack *head)
{
	int	pos;
	int	min;

	pos = 0;
	min = find_smallest(head);
	while (head->number != min)
	{
		pos++;
		head = head->next;
	}
	return (pos);
}

void	sort_small_list(t_stack **a, t_stack **b)
{
	while (lstsize(*a) > 3)
	{
		if (smallest_pos(*a) < (lstsize(*a) / 2))
		{
			while (find_smallest(*a) != (*a)->number)
				rotate_a(a);
		}
		else
			while (find_smallest(*a) != (*a)->number)
				rev_rotate_a(a);
		push_b(a, b);
	}
	sort_three(a);
	while (*b)
		push_a(a, b);
}
