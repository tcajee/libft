/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:16:53 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/28 11:55:42 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	minsize;
	size_t	maxsize;

	i = -1;
	minsize = ft_strlen(dst);
	maxsize = minsize;
	if (dstsize < minsize)
		maxsize = dstsize;
	maxsize = maxsize + ft_strlen(src);
	while ((++i + minsize) < (dstsize - 1) && (dstsize > 0) && *(src + i))
		*(dst + (i + minsize)) = *(src + i);
	*(dst + (i + minsize)) = '\0';
	return (maxsize);
}
