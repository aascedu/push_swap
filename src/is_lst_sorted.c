/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lst_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:47:08 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/27 11:40:07 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_lst_sorted(t_stack *a, t_stack *b)
{
	int	number;

	if (b != NULL)
		return (0);
	if (a->next == NULL && b == NULL)
		return (1);
	number = a->number;
	a = a->next;
	while (a)
	{
		if (number > a->number)
			return (0);
		number = a->number;
		a = a->next;
	}
	return (1);
}
