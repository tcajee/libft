/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:01:52 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/30 10:50:13 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int diff;

	diff = 1;
	if (s1 && s2)
	{
		if (ft_strcmp(s1, s2) != 0 && s1 && s2)
			diff = 0;
	}
	return (diff);
}
