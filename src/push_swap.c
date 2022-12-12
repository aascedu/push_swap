/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:56:02 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/11 16:00:04 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*number_array;
	if (argc == 1)
		return (0);
	if (valid_args(argc, argv) == 0)
		return (ft_printf("Error\n"));
	number_array = entry_parsing(argc, argv);
	int	index = 0;
	while (number_array[index])
	{
		ft_printf("number_array[%d]=%d\n", index, number_array[index]);
		index++;
	}
	return (0);
}
