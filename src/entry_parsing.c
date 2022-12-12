/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:40:58 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/12 11:54:56 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(char **text_array, int len)
{
	int	i;

	i = 0;
	while (i <= len)
	{
		free(text_array[i]);
		i++;
	}
	free(text_array);
}

static int	*one_string_entry(int *array_len, char **argv)
{
	char	**text_array;
	int		*number_array;
	int		index;

	text_array = ft_split(argv[1], ' ');
	index = 0;
	while (text_array[index])
		index++;
	*array_len = index;
	number_array = (int *)malloc(sizeof(int) * (index));
	if (!number_array)
		return (NULL);
	index = 0;
	while (text_array[index])
	{
		number_array[index] = ft_atoi(text_array[index]);
		index++;
	}
	free_all(text_array, index);
	return (number_array);
}

// static int

int	*entry_parsing(int *array_len, int argc, char **argv)
{
	if (argc == 2)
		return (one_string_entry(array_len, argv));
	return (0);
}
