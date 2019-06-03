/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:28:11 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/03 16:27:56 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char		**breadcrumb;
	char		**array;
	const char	*start;
	size_t		len;
	size_t		words;

	if (!s)
		return (NULL);
	array = NULL;
	words = ft_strwcount(s, c);
	array = (char **)malloc(words * sizeof(char *) + 1);
	if (!array)
		return (NULL);
	breadcrumb = array;
	while (words-- > 0)
	{
		start = ft_strwnext(s, c);
		len = ft_strwlen(start, c);
		*breadcrumb = ft_strsub(start, 0, len);
		if (!*breadcrumb++)
			return (NULL);
		s = (start + len);
	}
	*breadcrumb = NULL;
	return (array);
}
