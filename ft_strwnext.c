/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwnext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:35:35 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/03 15:12:11 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strwnext(const char *s, char c)
{
//	const char *start;

//	start = s;
	while (*s && *s == c)
	{
		s++;
//		if (*s != c && *s != '\0')
//			start = s;
//		else
//			return (start);
	}
//	return (start);
	return (s);
}
