/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:40:58 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/11 16:05:07 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*one_string_entry(char **argv)
{
	char	**text_array;
	int		*number_array;
	int		index;

	text_array = ft_split(argv[1], ' ');
	index = 0;
	while (text_array[index])
		index++;
	number_array = (int *)malloc(sizeof(int) * index);
	if (!number_array)
		return (NULL);
	index = 0;
	while (text_array[index])
	{
		number_array[index] = ft_atoi(text_array[index]);
		ft_printf("text_array[%d]:%s\n", index, text_array[index]);
		index++;
	}
	return (number_array);
}

int	*entry_parsing(int argc, char **argv)
{
	if (argc == 2)
		return (one_string_entry(argv));
	return (0);
}
