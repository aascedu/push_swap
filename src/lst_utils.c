/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:59:20 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/29 11:59:21 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lstlast(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

int	lstsize(t_stack *lst)
{
	int	i;

	if (lst == NULL)
		return (0);
	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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

void	free_lst(t_stack *head)
{
	t_stack	*temp;
	t_stack	*next;

	temp = head;
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	head = NULL;
}
