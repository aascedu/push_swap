/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:28:07 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/14 15:29:52 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
}		t_stack;

char	**args_to_array(char **argv);

int		check_dups(char **array);

t_stack	*args_to_nodes(char **argv);
t_stack	*create_node(void);
void	free_lst(t_stack *head);

#endif
