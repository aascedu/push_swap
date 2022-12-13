/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_nodes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:57:16 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/13 19:21:49 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(void)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	//if (!new_node)
		// Free and delete whole doubly linked list.
	new_node->next = 0;
	new_node->number = 0;
	return (new_node);
}

t_stack	*args_to_nodes(char **argv)
{
	int		index;
	t_stack	*first;
	t_stack	*temp;
	char	**text_array;

	text_array = args_to_array(argv);
	if (!text_array)
		return (NULL);
	first = create_node();
	temp = first;
	index = 0;
	while (text_array[index])
	{
		if (ft_atoi(text_array[index]) > INT_MAX
			|| ft_atoi(text_array[index]) < INT_MIN)
			return (free(text_array), NULL);
		temp->number = ft_atoi(text_array[index]);
		temp->next = create_node();
		temp = temp->next;
		index++;
	}
	if (check_dups(text_array))
		return (NULL); // ADD FREE_ALL FUNCTION.
	free(text_array);
	return (first);
}
