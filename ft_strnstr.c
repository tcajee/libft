/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:58:02 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/28 16:49:38 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len - ft_strlen(needle) && haystack[i])
	{
		if (haystack[i] == needle[0]) 
			while (haystack[i + j] == needle[j] && needle[j] != '\0')
				j++;
			if (j == ft_strlen(needle))
				return((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
