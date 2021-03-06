/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:13:32 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/17 14:00:16 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_h;
	size_t			i;

	if (src && dst)
	{
		i = -1;
		dst_h = (unsigned char *)dst;
		while (++i < n)
		{
			dst_h[i] = *((unsigned char *)src + i);
			F_((*((unsigned char *)src + i) == (unsigned char)c), &dst_h[++i]);
		}
	}
	return (NULL);
}
