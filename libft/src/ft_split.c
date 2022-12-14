/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:32:35 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/14 15:09:18 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countargs(const char *str, char c)
{
	int	i;
	int	args;

	args = 0;
	i = 0;
	while (str[i])
	{
		if (i == 0)
		{
			if (str[i] != c)
				args++;
		}
		else
		{
			if (str[i] != c && str[i - 1] == c)
				args++;
		}
		i++;
	}
	return (args);
}
#include <stdio.h>
char	**ft_freeall(char **res)
{
	int	i;

	i = 0;
	if (!res)
		return (NULL);
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

// static char	*ft_dupstr(const char *s, char c, char **res)
// {
// 	int		i;
// 	char	*copy;

// 	i = 0;
// 	while (s[i] && s[i] != c)
// 		i++;
// 	copy = malloc(sizeof(char) * (i + 1));
// 	if (!copy)
// 		return ((char *)ft_freeall(res, ft_countargs(s, c)));
// 	i = 0;
// 	while (s[i] && s[i] != c)
// 	{
// 		copy[i] = s[i];
// 		i++;
// 	}
// 	copy[i] = '\0';
// 	return (copy);
// }

int	word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		arg;

	if (s == NULL)
		return (NULL);
	result = ft_calloc(ft_countargs(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	arg = -1;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			result[++arg] = malloc(sizeof(char) * (word_len(&s[i], c) + 1));
			if (!result[arg])
				return (ft_freeall(result));
			ft_memcpy(result[arg], &s[i], word_len(&s[i], c));
			i += word_len(&s[i], c);
		}
	}
	return (result);
}
