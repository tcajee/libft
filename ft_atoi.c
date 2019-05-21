/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:52:36 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/21 17:06:45 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long res;
	int sign;
	const char *input;

	res = 0;
	input = str;
	sign = 1;

	while ((*input >= '\t' && *input <= '\r') || *input == 27
			|| *input == ' ')
	{
		input++;
	}
	while (*input == '-')
	{
		sign *= -1;
		input++;
	}
	while (*input)
	{
		if  ((*input >= '\t' && *input <= '\r') || *input == 27 \
			|| *input == ' ')
		{
			return (res * sign);
		}
		else
		{
			res = res * 10 + (*input - '0');
			input++;
		}
	}
	return (res * sign);
}
