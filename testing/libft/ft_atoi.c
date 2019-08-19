/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:52:36 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 13:21:01 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_atoi(const char *str)
{
	long		res;
	long		sign;
	const char	*input;

	input = str;
	res = 0;
	sign = 1;
	if (str)
	{
		___(ft_isspace(*input), input++);
		F(*input == '+', input++);
		_F(*input == '-', sign = !!(*input++) * -1);
		___(*input && ft_isdigit(*input), res = res * 10 + (*input++ - '0'));
	}
	return ((int)res * (int)sign);
}
