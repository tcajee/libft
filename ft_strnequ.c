/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:50:20 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/30 10:51:10 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int diff;

	diff = 1;
	if (s1 && s2)
	{
		if (ft_strncmp(s1, s2, n) != 0 && s1 && s2)
			diff = 0;
	}
	return (diff);
}
