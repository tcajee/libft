/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:52:36 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/22 08:43:58 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			res;
	int			sign;
	const char	*input;

	res = 0;
	input = str;
	sign = 1;
	while ((*input >= '\t' && *input <= '\r') || *input == ' ')
		input++;
	if (*input == '-' || *input == '+')
	{
		if (*input == '-')
			sign = -1;
		input++;
	}
	while (*input && ft_isdigit(*input))
	{
		res = res * 10 + (*input - '0');
		input++;
	}
	return (res * sign);
}
