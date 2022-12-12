/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:40:58 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/12 15:01:24 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_all(char **text_array, int len)
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

static int	*split_in_array(char *str, int *array_len)
{
	char	**text_array;
	int		*number_array;
	int		index;

	text_array = ft_split(str, ' ');
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

int	*entry_parsing(int *array_len, char **argv)
{
	int		index;
	int		*number_array;
	char	*entry;

	index = 0;
	entry = ft_calloc(1, sizeof(char));
	while (argv[index])
	{
		entry = ft_strjoin(entry, argv[index]);
		index++;
	}
	number_array = split_in_array(entry, array_len);
	free(entry);
	return (number_array);
}
