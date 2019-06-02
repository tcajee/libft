/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:34:04 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/02 17:19:26 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strwcount(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c && *s != '\0')
			words++;
		while (*s && *s != c)
			s++;
	}
	return (words);
}
