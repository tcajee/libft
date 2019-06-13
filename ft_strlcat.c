/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:16:53 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/13 17:19:32 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	catlen;

	i = 0;
	dstlen = ft_strlen(dst);
	catlen = dstlen;
	if (dstsize < dstlen)
		catlen = dstsize;
	catlen += ft_strlen(src);
	while (dstlen + i < dstsize - 1 && dstsize > 0 && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (catlen);
}
