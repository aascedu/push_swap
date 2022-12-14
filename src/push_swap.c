/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:51:00 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/14 11:38:09 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*head;
	//t_stack	*b;

	(void)argc;
	a = args_to_nodes(argv + 1);
	head = a;
	if (!a)
		return ((void)ft_printf("Error\n"), 1);
	while (a->next)
	{
		printf("%d\n", a->number);
		a = a->next;
	}
	a = head;
	free_lst(a);
	return (0);
}
