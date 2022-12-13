/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:37:19 by arthurasced       #+#    #+#             */
/*   Updated: 2022/12/13 17:39:46 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	wrong_minus(char c0, char c1, char c2)
{
		if ((ft_isdigit(c0) && c1 == '-') || (c1 == '-' && !ft_isdigit(c2)))
			return (1);
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
		line = ft_strjoin(line, argv[i]);
	i = -1;
	while (line[++i] && line)
	{
		if ((ft_isdigit(line[i]) == 0 && line[i] != 32 && line[i] != '-')
			|| wrong_minus(line[i - 1], line[i], line[i + 1]))
			return (free(line), NULL);
	}
	array = ft_split(line, ' ');
	free(line);
	return (array);
}
