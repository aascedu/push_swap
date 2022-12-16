/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:14:43 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/16 10:37:30 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
