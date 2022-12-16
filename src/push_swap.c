/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:51:00 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/16 13:53:44 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*head_ref;
	t_stack	*head_ref1;

	(void)argc;
	a = args_to_nodes(argv + 1);
	b = NULL;
	head_ref = a;
	if (!a)
		return (1);
	while (a)
	{
		printf("stack a=%d\n", a->number);
		a = a->next;
	}
	a = head_ref;
	push_b(&a, &b);
	push_b(&a, &b);
	push_b(&a, &b);
	rotate_rr(&a, &b);
	swap_ss(&a, &b);
	head_ref = a;
	head_ref1 = b;
	printf("\nStack A:\n");
	while (a)
	{
		printf("%d\n", a->number);
		a = a->next;
	}
	printf("\nStack B:\n");
	while (b)
	{
		printf("B = %d\n", b->number);
		b = b->next;
	}
	a = head_ref;
	b = head_ref1;
	free_lst(a);
	free_lst(b);
	return (0);
}
