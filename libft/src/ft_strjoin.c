/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:04:37 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/12 13:44:48 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strjoin has been modified to join 2 strings with a space in between them
// so that i can split them easily later on.

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res = malloc(sizeof(char) * ((int)ft_strlen(s1) + (int)ft_strlen(s2) + 2));
	if (!res)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s1))
	{
		res[i] = s1[i];
		i++;
	}
	res[i++] = ' ';
	j = 0;
	while (j < (int)ft_strlen(s2))
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	free(s1);
	return (res);
}
