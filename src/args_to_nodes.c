/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_nodes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:57:16 by arthurasced       #+#    #+#             */
/*   Updated: 2023/01/03 11:30:26 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(int content, t_stack *first)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (free_lst(first), NULL);
	new_node->number = content;
	new_node->next = NULL;
	return (new_node);
}

int	check_limits(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (ft_atoi(array[i]) > INT_MAX || ft_atoi(array[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	len_array(char **array)
{
	int	len;

	len = 0;
	while (array[len])
		len++;
	return (len);
}

int	rank_num(char **array, int i)
{
	int	index;
	int	rank;

	index = -1;
	rank = 0;
	while (array[++index])
		if (ft_atoi(array[i]) > ft_atoi(array[index]))
			rank++;
	return (rank);
}

t_stack	*args_to_nodes(char **argv)
{
	int		i;
	t_stack	*first;
	char	**array;

	first = NULL;
	array = args_to_array(argv);
	if (!array)
		return (ft_putstr_fd("Error\n", 2), NULL);
	if (check_dups(array) || check_limits(array))
		return (ft_freeall(array), ft_putstr_fd("Error\n", 2), NULL);
	i = -1;
	while (array[++i])
		lstadd_back(&first, create_node(rank_num(array, i), first));
	return (ft_freeall(array), first);
}
