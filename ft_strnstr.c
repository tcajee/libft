/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:58:02 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/29 10:03:03 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t minsize;

	minsize = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (len-- >= minsize && *haystack)
	{
		if (*haystack == needle[0] && \
				(ft_strncmp(haystack, needle, minsize) == 0))
			return((char *)haystack);
		haystack++;
	}
	return (NULL);
}
