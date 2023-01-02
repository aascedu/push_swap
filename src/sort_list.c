/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:13:07 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/29 11:58:41 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos_highest_num(t_stack *head)
{
	t_stack	*temp;
	int		number;
	int		pos;
	int		i;

	i = 0;
	pos = 0;
	temp = head;
	number = head->number;
	while (temp)
	{
		if (temp->number > number)
		{
			number = temp->number;
			pos = i;
		}
		temp = temp->next;
		i++;
	}
	return (pos);
}

void	push_max(t_stack **a, t_stack **b)
{
	int	pos;

	if (is_lst_sorted(*a, *b))
		return ;
	pos = find_pos_highest_num(*b);
	if (pos < (lstsize(*b) / 2))
	{
		while (pos--)
			rotate_b(b);
	}
	else
	{
		pos = lstsize(*b) - pos;
		while (pos--)
			rev_rotate_b(b);
	}
	push_a(a, b);
}

void	sort_list(t_stack **a, t_stack **b, int chunk, int double_chunk)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (is_lst_sorted(*a, *b) == 0)
	{
		while (*a && lstsize(*b) <= i * double_chunk)
		{
			if ((*a)->number <= j * chunk)
				push_b(a, b);
			else if ((*a)->number <= i * double_chunk)
			{
				push_b(a, b);
				rotate_b(b);
			}
			else
				rotate_a(a);
		}
		i += 1;
		j += 2;
		while ((*b) && i > chunk / 2)
			push_max(a, b);
	}
}
