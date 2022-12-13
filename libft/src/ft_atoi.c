/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:07:49 by aascedu           #+#    #+#             */
/*   Updated: 2022/12/13 15:58:19 by arthurasced      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_whitespace(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

long int	ft_atoi(const char *str)
{
	int	i;
	long int	sign;
	long int	number;

	i = 0;
	while (ft_whitespace(str[i]) == 1)
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	number = 0;
	while (ft_isdigit(str[i]))
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	number = number * sign;
	return (number);
}
