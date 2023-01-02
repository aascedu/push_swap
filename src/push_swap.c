/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:51:00 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/29 11:58:18 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_sorting(t_stack **a, t_stack **b)
{
	if (lstsize(*a) == 2)
		swap_a(a);
	if (lstsize(*a) == 3)
		sort_three(a, b);
	if (lstsize(*a) >= 5)
		sort_small_list(a, b);
	if (lstsize(*a) <= 100)
		sort_list(a, b, CHUNK, DOUBLE_CHUNK);
	else
		sort_list(a, b, CHUNK_BIG, DOUBLE_CHUNK_BIG);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	(void)argc;
	a = args_to_nodes(argv + 1);
	b = NULL;
	if (!a)
		return (1);
	if (is_lst_sorted(a, b))
		return (free_lst(a), free_lst(b), 0);
	choose_sorting(&a, &b);
	return (free_lst(a), free_lst(b), 0);
}
