/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_nodes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:57:16 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/14 15:09:49 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(void)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	new_node->next = 0;
	new_node->number = 0;
	return (new_node);
}

t_stack	*args_to_nodes(char **argv)
{
	int		i;
	t_stack	*first;
	t_stack	*temp;
	char	**array;

	array = args_to_array(argv);
	first = create_node();
	if (!first || !array)
		return (free_lst(first), ft_freeall(array), NULL);
	temp = first;
	i = -1;
	while (array[++i])
	{
		if (ft_atoi(array[i]) > INT_MAX || ft_atoi(array[i]) < INT_MIN)
			return (ft_freeall(array), free_lst(first), NULL);
		temp->number = ft_atoi(array[i]);
		temp->next = create_node();
		if (!temp->next)
			return (free_lst(first), ft_freeall(array), NULL);
		temp = temp->next;
	}
	if (check_dups(array))
		return (free_lst(first), ft_freeall(array), NULL);
	return (ft_freeall(array), first);
}
