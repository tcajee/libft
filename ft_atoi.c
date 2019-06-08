/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:52:36 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/08 17:49:06 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long		res;
	long		sign;
	const char	*input;

	res = 0;
	input = str;
	sign = 1;
	while (ft_iswhitespace(*input) == 1)
		input++;
	if (*input == '-' || *input == '+')
	{
		if (*input == '-')
			sign = -1;
		input++;
	}
	while (*input && ft_isdigit(*input))
	{
		res = res * 10 + (*input++ - '0');
		if ((res * sign) > 2147483647)
			return (-1);
		if ((res * sign) < -2147483648)
			return (0);
	}
	return ((int)res * (int)sign);
}
