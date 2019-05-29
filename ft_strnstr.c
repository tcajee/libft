/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:58:02 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/29 13:07:44 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		minsize;
	const char	*cursor;

	minsize = ft_strlen(needle);
	cursor = haystack;
	if (minsize == 0)
		return ((char *)haystack);
	while (*haystack && (cursor + minsize) <= (haystack + len))
	{
		if (*cursor == *needle && \
				ft_strncmp(cursor, needle, minsize) == 0)
			return ((char *)cursor);
		cursor++;
	}
	return (NULL);
}
