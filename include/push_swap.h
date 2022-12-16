/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:28:07 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/16 13:34:50 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include <stdlib.h>
# include <limits.h>

#include <stdio.h>

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
}		t_stack;

char	**args_to_array(char **argv);

int		check_dups(char **array);

t_stack	*args_to_nodes(char **argv);
t_stack	*create_node(int content, t_stack *first);
t_stack	*lstlast(t_stack *lst);
t_stack	*lstfind(t_stack *lst, t_stack *stop);
void	free_lst(t_stack *head);

void	swap_a(t_stack **head);
void	swap_b(t_stack **head);
void	swap_ss(t_stack **head1, t_stack **head2);

void	rotate(t_stack **head);
void	rotate_a(t_stack **head);
void	rotate_b(t_stack **head);
void	rotate_rr(t_stack **head1, t_stack **head2);

void	rev_rotate(t_stack **head);
void	rev_rotate_a(t_stack **head);
void	rev_rotate_b(t_stack **head);
void	rev_rotate_rr(t_stack **head1, t_stack **head2);

void	push_a(t_stack **head1, t_stack **head2);
void	push_b(t_stack **head1, t_stack **head2);

#endif
