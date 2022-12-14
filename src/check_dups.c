/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dups.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:16:51 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/14 09:22:16 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_array(int *array, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_dups(char **array)
{
	int	i;
	int	len;
	int	*num_array;

	i = 0;
	while (array[i])
		i++;
	len = i;
	num_array = (int *)malloc(sizeof(int) * i);
	if (!num_array)
		return (1);
	i = -1;
	while (++i < len)
		num_array[i] = ft_atoi(array[i]);
	if (check_array(num_array, len))
		return (free(num_array), 1);
	return (free(num_array), 0);
}
