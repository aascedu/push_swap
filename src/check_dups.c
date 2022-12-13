/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dups.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:16:51 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/13 19:34:07 by arthurasced      ###   ########lyon.fr   */
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
		return (1);
	return (0);
}