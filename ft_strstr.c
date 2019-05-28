/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:39:08 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/28 15:35:30 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int output;

	i = 0;
	output = -1;
	if (ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
			output = ft_strncmp(&haystack[i], needle, ft_strlen(needle));
		if (output == 0)
			return ((char *)&haystack[i]);
		else
			i++;
	}
	return (NULL);
}
