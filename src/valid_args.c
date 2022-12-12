/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:25:33 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/11 15:53:20 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg(char *str)
{
	int	index;

	index = 0;
	while (str && str[index])
	{
		if (!ft_isdigit(str[index]) && str[index] != 32)
			return (0);
		index++;
	}
	return (1);
}

int	valid_args(int argc, char **argv)
{
	int	index;

	index = 1;
	while (index < argc)
	{
		if (check_arg(argv[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}
