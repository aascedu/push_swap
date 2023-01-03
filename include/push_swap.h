/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:28:07 by aascedu           #+#    #+#             */
/*   Updated: 2023/01/03 13:00:08 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include <stdlib.h>
# include <limits.h>
# define CHUNK 10
# define DOUBLE_CHUNK 20
# define CHUNK_BIG 25
# define DOUBLE_CHUNK_BIG 50

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
}		t_stack;

// push_swap.c functions
void	choose_sorting(t_stack **a, t_stack **b);

// args_to_array.c functions
int		check_line(char *str);
char	**args_to_array(char **argv);

// args_to_nodes.c functions
int		rank_num(char **array, int i);
int		len_array(char **array);
int		check_limits(char **array);
t_stack	*args_to_nodes(char **argv);
t_stack	*create_node(int content, t_stack *first);

// check_dups.c functions
int		check_dups(char **array);
int		check_array(int *array, int len);

// is_lst_sorted.c functions
int		is_lst_sorted(t_stack *a, t_stack *b);

// lst_utils.c functions
int		lstsize(t_stack *lst);
void	free_lst(t_stack *head);
void	lstadd_back(t_stack **lst, t_stack *new);
t_stack	*lstfind(t_stack *lst, t_stack *stop);
t_stack	*lstlast(t_stack *lst);

// push.c functions
void	push_a(t_stack **head_a, t_stack **head_b);
void	push_b(t_stack **head_a, t_stack **head_b);
void	del_first(t_stack **head);

// rev_rotate.c functions
void	rev_rotate(t_stack **head);
void	rev_rotate_a(t_stack **head);
void	rev_rotate_b(t_stack **head);
void	rev_rotate_rr(t_stack **head1, t_stack **head2);

// rotate.c functions
void	rotate(t_stack **head);
void	rotate_a(t_stack **head);
void	rotate_b(t_stack **head);
void	rotate_rr(t_stack **head1, t_stack **head2);

// sort_list.c functions
int		find_pos_highest_num(t_stack *head);
void	push_max(t_stack **a, t_stack **b);
void	sort_list(t_stack **a, t_stack **b, int chunk, int double_chunk);

// sort_small_list.c functions
int		find_smallest(t_stack *head);
int		smallest_pos(t_stack *head);
void	sort_small_list(t_stack **a, t_stack **b);
void	sort_three(t_stack **a);

// swap.c functions
void	swap(t_stack **head);
void	swap_a(t_stack **head);
void	swap_b(t_stack **head);
void	swap_ss(t_stack **head1, t_stack **head2);

#endif
