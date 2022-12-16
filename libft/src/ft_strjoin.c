/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:04:37 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/16 13:45:54 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strjoin has been modified to join 2 strings with a space in between them
// so that i can split them easily later on.

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	char	*dup;
	int		i;
	int		j;

	dup = ft_strdup(s1);
	free(s1);
	res = malloc(sizeof(char) * (ft_strlen(dup) + ft_strlen(s2) + 2));
	if (!res)
		return (NULL);
	i = -1;
	while (++i < (int)ft_strlen(dup))
		res[i] = dup[i];
	j = 0;
	while (j < (int)ft_strlen(s2))
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = ' ';
	res[i + j + 1] = 0;
	free(dup);
	return (res);
}
