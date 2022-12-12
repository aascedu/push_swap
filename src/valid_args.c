/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:25:33 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/12 11:40:39 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_arg(char *str)
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
