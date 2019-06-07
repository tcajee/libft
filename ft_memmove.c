/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 11:21:02 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/27 08:30:36 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst_h;
	unsigned char	*src_h;

	i = -1;
	dst_h = (unsigned char *)dst;
	src_h = (unsigned char *)src;
	if (dst_h == src_h)
		return (dst_h);
	if (dst_h < src_h)
	{
		while (++i < len)
			dst_h[i] = src_h[i];
	}
	else
	{
		while (len-- > 0)
			dst_h[len] = src_h[len];
	}
	return (dst);
}