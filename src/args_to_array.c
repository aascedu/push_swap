/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:37:19 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/14 15:10:14 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str)
	{
		if (ft_isdigit(str[i]) == 0 && str[i] != 32 && str[i] != '-')
			return (1);
		i++;
	}
	i = 0;
	while (str[i] && str)
	{
		if (i == 0)
		{
			if (str[i] == '-' && !ft_isdigit(str[i + 1]))
				return (1);
		}
		else if (str[i] == '-' && ft_isdigit(str[i - 1]))
			return (1);
		else if (str[i] == '-' && !ft_isdigit(str[i + 1]))
			return (1);
		i++;
	}
	return (0);
}

char	**args_to_array(char **argv)
{
	int		i;
	char	*line;
	char	**array;

	line = (char *)malloc(sizeof(char));
	if (!line)
		return (NULL);
	line[0] = '\0';
	i = -1;
	while (argv[++i])
	{
		line = ft_strjoin(line, argv[i]);
		if (!line)
			return (free(line), NULL);
	}
	if (check_line(line))
		return (free(line), NULL);
	array = ft_split(line, ' ');
	if (!array)
		return (free(line), ft_freeall(array), NULL);
	free(line);
	return (array);
}
