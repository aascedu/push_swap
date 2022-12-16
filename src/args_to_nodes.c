/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_nodes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:57:16 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/16 10:29:18 by aascedu          ###   ########lyon.fr   */
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

t_stack	*lstlast(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

t_stack	*lstfind(t_stack *lst, t_stack *stop)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != stop)
		lst = lst->next;
	return (lst);
}

void	lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

	if (lst == NULL)
		return ;
	temp = *lst;
	if (!temp)
	{
		*lst = new;
		return ;
	}
	temp = lstlast(temp);
	temp->next = new;
}

t_stack	*args_to_nodes(char **argv)
{
	int		i;
	t_stack	*first;
	char	**array;

	first = NULL;
	array = args_to_array(argv);
	if (!array)
		return ((void)ft_printf("Error\n"), NULL);
	if (check_dups(array))
		return (ft_freeall(array), (void)ft_printf("Error\n"), NULL);
	i = 0;
	while (array[i])
	{
		if (ft_atoi(array[i]) > INT_MAX || ft_atoi(array[i]) < INT_MIN)
		{
			ft_printf("Error\n");
			return (ft_freeall(array), free_lst(first), NULL);
		}
		lstadd_back(&first, create_node(ft_atoi(array[i]), first));
		i++;
	}
	return (ft_freeall(array), first);
}
