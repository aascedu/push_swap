/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:51:00 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/13 15:35:46 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	//t_stack	*b;
	
	(void)argc;
	a = args_to_nodes(argv + 1);
	if (!a)
		return ((void)ft_printf("Error\n"), 1);
	while (a->next)
	{
		printf("%d\n", a->number);
		a = a->next;
	}
	return (0);
}