/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 08:29:16 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/16 13:35:53 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **head)
{
	int		nbr;

	if (!*head || !(*head)->next)
		return ;
	nbr = (*head)->next->number;
	(*head)->next->number = (*head)->number;
	(*head)->number = nbr;
}

void	swap_a(t_stack **head)
{
	swap(head);
	ft_printf("sa\n");
}

void	swap_b(t_stack **head)
{
	swap(head);
	ft_printf("sb\n");
}

void	swap_ss(t_stack **head1, t_stack **head2)
{
	swap(head1);
	swap(head2);
	if (!*head1 || !(*head1)->next || !*head2 || !(*head2)->next)
		return ;
	ft_printf("ss\n");
}
