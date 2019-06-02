/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:28:11 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/31 12:06:17 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char		**array;
	const char	*start;
	char		*new;

	array = NULL;
	new = NULL;
	if (!s)
		return (NULL);
	*array = ft_strnew(ft_strwcount(s, c));
	if (!array)
		return (NULL);
	while (*s)
	{
		start = ft_strwnext(s, c);
		new = ft_strsub(start, 0, ft_strwlen(start, c));
		if (!new)
			return (NULL);
		*array++ = new;
		s = (start + ft_strwlen(start, c));
	}
	return (array);
}
