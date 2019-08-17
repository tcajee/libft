/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:52:36 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/17 13:33:57 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

int	ft_atoi(const char *str)
{
	long		res;
	long		sign;
	const char	*input;

	res = 0;
	input = str;
	sign = 1;
	if (str)
	{
		___(ft_isspace(*input), input++);
		F(*input == '-' || *input == '+', F(*input++ == '-', sign = -1));
		___(*input && ft_isdigit(*input), res *= 10 + (*input++ - '0'));
	}
	return ((int)res * (int)sign);
}
