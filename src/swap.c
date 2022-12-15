/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 08:29:16 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/15 13:45:23 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *head)
{
	int		nbr;

	if (!head || !head->next)
		return ;
	nbr = head->next->number;
	head->next->number = head->number;
	head->number = nbr;
	ft_printf("sa\n");
}

void	swap_b(t_stack *head)
{
	int		nbr;

	if (!head || !head->next)
		return ;
	nbr = head->next->number;
	head->next->number = head->number;
	head->number = nbr;
	ft_printf("sb\n");
}

void	swap_ss(t_stack *head1, t_stack *head2)
{
	int		nbr1;
	int		nbr2;

	if ((!head1 || !head1->next) && (!head2 || !head2->next))
		return ;
	nbr1 = head1->next->number;
	head1->next->number = head1->number;
	head1->number = nbr1;
	nbr2 = head2->next->number;
	head2->next->number = head2->number;
	head2->number = nbr2;
	ft_printf("ss\n");
}
