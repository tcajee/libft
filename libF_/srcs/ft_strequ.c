/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:01:52 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/20 09:43:35 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	F(s1 && s2, F_(ft_strcmp(s1, s2) != 0, 0));
	return (1);
}
