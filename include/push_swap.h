/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:28:07 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/13 19:34:25 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include <stdlib.h>
# include <limits.h>

//DELETE
#include <stdio.h>

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
}	t_stack;

char	**args_to_array(char **argv);

int	check_dups(char **array);

t_stack *args_to_nodes(char **argv);
t_stack *create_node(void);

#endif
