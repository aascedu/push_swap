/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:56:02 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/12 11:44:04 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_dup(int array_len, int *num_array)
{
	int	index;
	int	jndex;

	index = 0;
	while (index < array_len)
	{
		jndex = index + 1;
		while (jndex < array_len)
		{
			if (num_array[index] == num_array[jndex])
				return (1);
			jndex++;
		}
		index++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	*number_array;
	int	array_len;

	array_len = 0;
	if (argc == 1)
		return (0);
	if (valid_args(argc, argv) == 0)
		return (ft_printf("Error\n"));
	number_array = entry_parsing(&array_len, argc, argv);
	if (check_dup(array_len, number_array))
	{
		free(number_array);
		return (ft_printf("Error\n"));
	}
	int i = 0;
	while (i < array_len)
	{
		ft_printf("%d\n", number_array[i]);
		i++;
	}
	free(number_array);
	return (0);
}
