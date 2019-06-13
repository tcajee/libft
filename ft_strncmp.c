/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:35:23 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/13 13:06:35 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = n;
	if (i > ft_strlen(s1))
		i = ft_strlen(s1) + 1;
	if (i > ft_strlen(s2))
		i = ft_strlen(s2) + 1;
	result = ft_memcmp(s1, s2, i);
	if (result > 0)
		return (1);
	if (result < 0)
		return (-1);
	return (result);
}
